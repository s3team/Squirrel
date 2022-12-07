#include <cassert>
#include <fstream>
#include <iostream>
#include <memory>
#include <stack>
#include <string>

#include "afl-fuzz.h"
#include "config_validate.h"
#include "db.h"
#include "env.h"
#include "yaml-cpp/yaml.h"

struct SquirrelMutator {
  SquirrelMutator(DataBase *db) : database(db) {}
  ~SquirrelMutator() { delete database; }
  DataBase *database;
  std::string current_input;
};

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
  if (!utils::validate_db_config(config)) {
    std::cerr << "Invalid config!" << std::endl;
  }
  auto *mutator = create_database(config);
  return new SquirrelMutator(mutator);
}

void afl_custom_deinit(SquirrelMutator *data) { delete data; }

u8 afl_custom_queue_new_entry(SquirrelMutator *mutator,
                              const unsigned char *filename_new_queue,
                              const unsigned char *filename_orig_queue) {
  // read a file by file name
  std::ifstream ifs((const char *)filename_new_queue);
  std::string content((std::istreambuf_iterator<char>(ifs)),
                      (std::istreambuf_iterator<char>()));
  mutator->database->save_interesting_query(content);
  return false;
}

unsigned int afl_custom_fuzz_count(SquirrelMutator *mutator,
                                   const unsigned char *buf, size_t buf_size) {
  std::string sql((const char *)buf, buf_size);
  return mutator->database->mutate(sql);
}

size_t afl_custom_fuzz(SquirrelMutator *mutator, uint8_t *buf, size_t buf_size,
                       u8 **out_buf, uint8_t *add_buf,
                       size_t add_buf_size,  // add_buf can be NULL
                       size_t max_size) {
  DataBase *db = mutator->database;
  assert(db->has_mutated_test_cases());
  mutator->current_input = db->get_next_mutated_query();
  *out_buf = (u8 *)mutator->current_input.c_str();
  return mutator->current_input.size();
}
}
