#ifdef __ANDROID__
#include "android-ashmem.h"
#endif
#include <assert.h>
#include <errno.h>
#include <fcntl.h>
#include <signal.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <sys/shm.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

#include <iostream>

#include "absl/strings/str_format.h"
#include "client.h"
#include "config.h"
#include "env.h"
#include "types.h"
#include "yaml-cpp/yaml.h"

u8 *__afl_area_ptr;

#ifdef __ANDROID__
u32 __afl_map_size = MAP_SIZE;
#else
__thread u32 __afl_map_size = MAP_SIZE;
#endif

/* Error reporting to forkserver controller */

void send_forkserver_error(int error) {
  u32 status;
  if (!error || error > 0xffff) return;
  status = (FS_OPT_ERROR | FS_OPT_SET_ERROR(error));
  if (write(FORKSRV_FD + 1, (char *)&status, 4) != 4) return;
}

/* SHM setup. */

static void __afl_map_shm(void) {
  char *id_str = getenv(SHM_ENV_VAR);
  char *ptr;

  /* NOTE TODO BUG FIXME: if you want to supply a variable sized map then
     uncomment the following: */

  /*
  if ((ptr = getenv("AFL_MAP_SIZE")) != NULL) {

    u32 val = atoi(ptr);
    if (val > 0) __afl_map_size = val;

  }

  */

  if (__afl_map_size > MAP_SIZE) {
    if (__afl_map_size > FS_OPT_MAX_MAPSIZE) {
      fprintf(stderr,
              "Error: AFL++ tools *require* to set AFL_MAP_SIZE to %u to "
              "be able to run this instrumented program!\n",
              __afl_map_size);
      if (id_str) {
        send_forkserver_error(FS_ERROR_MAP_SIZE);
        exit(-1);
      }

    } else {
      fprintf(stderr,
              "Warning: AFL++ tools will need to set AFL_MAP_SIZE to %u to "
              "be able to run this instrumented program!\n",
              __afl_map_size);
    }
  }

  if (id_str) {
#ifdef USEMMAP
    const char *shm_file_path = id_str;
    int shm_fd = -1;
    unsigned char *shm_base = NULL;

    /* create the shared memory segment as if it was a file */
    shm_fd = shm_open(shm_file_path, O_RDWR, 0600);
    if (shm_fd == -1) {
      fprintf(stderr, "shm_open() failed\n");
      send_forkserver_error(FS_ERROR_SHM_OPEN);
      exit(1);
    }

    /* map the shared memory segment to the address space of the process */
    shm_base =
        mmap(0, __afl_map_size, PROT_READ | PROT_WRITE, MAP_SHARED, shm_fd, 0);

    if (shm_base == MAP_FAILED) {
      close(shm_fd);
      shm_fd = -1;

      fprintf(stderr, "mmap() failed\n");
      send_forkserver_error(FS_ERROR_MMAP);
      exit(2);
    }

    __afl_area_ptr = shm_base;
#else
    u32 shm_id = atoi(id_str);

    __afl_area_ptr = (u8 *)shmat(shm_id, 0, 0);

#endif

    if (__afl_area_ptr == (void *)-1) {
      send_forkserver_error(FS_ERROR_SHMAT);
      exit(1);
    }

    std::cerr << "SHM ID: " << id_str << std::endl;
    sleep(20);

    /* Write something into the bitmap so that the parent doesn't give up */
    __afl_area_ptr[0] = 1;
  }
}

/* Fork server logic. */

static void __afl_start_forkserver(void) {
  u8 tmp[4] = {0, 0, 0, 0};
  u32 status = 0;

  if (__afl_map_size <= FS_OPT_MAX_MAPSIZE)
    status |= (FS_OPT_SET_MAPSIZE(__afl_map_size) | FS_OPT_MAPSIZE);
  if (status) status |= (FS_OPT_ENABLED);
  memcpy(tmp, &status, 4);

  /* Phone home and tell the parent that we're OK. */

  if (write(FORKSRV_FD + 1, tmp, 4) != 4) return;
}

static u32 __afl_next_testcase(u8 *buf, u32 max_len) {
  s32 status, res = 0xffffff;

  /* Wait for parent by reading from the pipe. Abort if read fails. */
  if (read(FORKSRV_FD, &status, 4) != 4) return 0;

  /* we have a testcase - read it */
  status = read(0, buf, max_len);

  /* report that we are starting the target */
  if (write(FORKSRV_FD + 1, &res, 4) != 4) return 0;

  return status;
}

static void __afl_end_testcase(client::ExecutionStatus status) {
  int waitpid_status = 0xffffff;
  if (status == client::kServerCrash) {
    waitpid_status = 0x6;  // raise.
  }

  if (write(FORKSRV_FD + 1, &waitpid_status, 4) != 4) exit(1);
}

int main(int argc, char *argv[]) {
  const char *config_file_path = getenv(kConfigEnv);
  if (!config_file_path) {
    std::cerr << absl::StrFormat(
        "You should set the enviroment variable %s to "
        "the path of your config file.\n",
        kConfigEnv);
    exit(-1);
  }
  YAML::Node config = YAML::LoadFile(config_file_path);
  std::string db_name = config["db"].as<std::string>();
  std::string startup_cmd = config["startup_cmd"].as<std::string>();
  client::DBClient *database = client::create_client(db_name, config);
  database->initialize(config);

  /* This is were the testcase data is written into */
  constexpr size_t kMaxInputSize = 0x100000;
  u8 *buf = (u8 *)malloc(
      kMaxInputSize);  // this is the maximum size for a test case! set it!
  s32 len;

  __afl_map_size = MAP_SIZE;  // default is 65536

  /* then we initialize the shared memory map and start the forkserver */
  __afl_map_shm();
  __afl_start_forkserver();

  // Start the database server. In case that the driver
  // is stopped and restarted, we should not start another server.
  if (!database->check_alive()) {
    system(startup_cmd.c_str());
  }

  while ((len = __afl_next_testcase(buf, kMaxInputSize)) > 0) {
    std::string query((const char *)buf, len);
    // std::cerr << "Executing: " << query << std::endl;
    database->prepare_env();

    client::ExecutionStatus status = database->execute((const char *)buf, len);

    database->clean_up_env();

    __afl_area_ptr[0] = 1;

    /* report the test case is done and wait for the next */
    __afl_end_testcase(status);

    if (status == client::kServerCrash) {
      // Restart the server.
      system(startup_cmd.c_str());
    }
  }
  assert(false && "Crash on parent?");

  return 0;
}
