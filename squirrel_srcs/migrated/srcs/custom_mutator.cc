#include <cassert>
#include <fstream>
#include <iostream>
#include <memory>
#include <stack>
#include <string>

#include "afl-fuzz.h"
#include "db.h"
#include "env.h"
#include "yaml-cpp/yaml.h"

extern "C" {

void *afl_custom_init(afl_state_t *afl, unsigned int seed) {
  const char *config_file_path = getenv(kConfigEnv);
  if (!config_file_path) {
    std::cerr << "You should set the enviroment variable " << kConfigEnv
              << " to the path of your config file." << std::endl;
    exit(-1);
  }
  std::string config_file(config_file_path);
  std::cerr << "Config file: " << config_file << std::endl;
  YAML::Node config = YAML::LoadFile(config_file);
  auto *mutator = create_database(config);
  return mutator;
}

void afl_custom_deinit(DataBase *data) { delete data; }

u8 afl_custom_queue_new_entry(DataBase *mutator,
                              const unsigned char *filename_new_queue,
                              const unsigned char *filename_orig_queue) {
  // read a file by file name
  std::ifstream ifs((const char *)filename_new_queue);
  std::string content((std::istreambuf_iterator<char>(ifs)),
                      (std::istreambuf_iterator<char>()));
  mutator->save_interesting_query(content);
  return false;
}

unsigned int afl_custom_fuzz_count(DataBase *mutator, const unsigned char *buf,
                                   size_t buf_size) {
  std::string sql((const char *)buf, buf_size);
  return mutator->mutate(sql);
}

size_t afl_custom_fuzz(DataBase *mutator, uint8_t *buf, size_t buf_size,
                       u8 **out_buf, uint8_t *add_buf,
                       size_t add_buf_size,  // add_buf can be NULL
                       size_t max_size) {
  assert(mutator->has_mutated_test_cases());
  auto test_case = mutator->get_next_mutated_query();
  *out_buf = (u8 *)test_case.first;
  return test_case.second;
}
}
