#include <fstream>
#include <iostream>
#include <memory>
#include <stack>
#include <string>
#include "yaml-cpp/yaml.h"

#include "ast.h"
#include "define.h"
#include "mutator.h"
#include "utils.h"
#include "afl-fuzz.h"

class SQLMutator {
 public:
  bool init(const string &file, const std::string& pragma_path) {
    mutator_.init(file, "", pragma_path);
    return true;
  }

  std::vector<IR *> mutate_all(std::vector<IR *> &ir_set) {
    return mutator_.mutate_all(ir_set);
  }

  std::string validate(IR *ir) {
    return mutator_.validate(ir);
  }

  size_t validate_all(const std::vector<IR *> &ir_set) {
    for (IR *ir : ir_set) {
      std::string validated_ir = mutator_.validate(ir);
      if (validated_ir.empty()) { continue; }
      unsigned char *buf = (unsigned char *)(strdup(validated_ir.c_str()));
      validated_test_cases_.push(std::make_pair(buf, validated_ir.size()));
    }
    return validated_test_cases_.size();
  }

  bool has_validated_test_cases() {
    return !validated_test_cases_.empty();
  }

  std::pair<unsigned char *, size_t> get_next_validated_test_case() {
    assert(has_validated_test_cases());
    auto result = validated_test_cases_.top();
    validated_test_cases_.pop();
    return result;
  }

  std::string extract_struct(IR *ir) {
    return mutator_.extract_struct(ir);
  }

  void add_to_library(IR *ir) {
    mutator_.add_to_library(ir);
  }

 private:
  Mutator                                   mutator_;
  std::stack<pair<unsigned char *, size_t>> validated_test_cases_;
};

extern "C" {

void *afl_custom_init(afl_state_t *afl, unsigned int seed) {
  SQLMutator *mutator = new SQLMutator{};

  std::cerr << "HEre!!" << std::endl;
  std::string       config_file((const char *)(afl->init_lib));
  std::cerr << "Config file: " << config_file << std::endl;;
  YAML::Node        config = YAML::LoadFile(config_file);
  std::cerr << "Loading file: " << config_file << std::endl;;
  const std::string init_lib_path = config["init_lib"].as<std::string>();
  std::cerr << "Init path" << init_lib_path << std::endl;
  const std::string pragma_path = config["pragma"].as<std::string>();
  std::cerr << "pragma path" << pragma_path << std::endl;
  vector<string> file_list = get_all_files_in_dir(init_lib_path.c_str(), true);
  for (auto &f : file_list) {
    std::cerr << "init lib: " << f << ", status ";
    if (mutator->init(f, pragma_path)) {
      std::cerr << "Success" << std::endl;
    } else {
      std::cerr << "Failed" << std::endl;
    }
  }
  return mutator;
}

void afl_custom_deinit(SQLMutator *data) {
  delete data;
}

u8 afl_custom_queue_new_entry(SQLMutator *         mutator,
                              const unsigned char *filename_new_queue,
                              const unsigned char *filename_orig_queue) {
  // read a file by file name
  std::ifstream ifs((const char *)filename_new_queue);
  std::string   content((std::istreambuf_iterator<char>(ifs)),
                      (std::istreambuf_iterator<char>()));
  if (Program *program = parser(content)) {
    std::vector<IR *> ir_set;
    IR *              ir = program->translate(ir_set);
    ir_set.clear();
    string strip_sql = mutator->extract_struct(ir);
    auto   p_strip_sql = parser(strip_sql);
    if (p_strip_sql) {
      auto root_ir = p_strip_sql->translate(ir_set);
      p_strip_sql->deep_delete();
      mutator->add_to_library(root_ir);
      deep_delete(root_ir);
    }
  }
  return false;
}

unsigned int afl_custom_fuzz_count(SQLMutator *         mutator,
                                   const unsigned char *buf, size_t buf_size) {
  std::vector<IR *> ir_set, mutated_tree;
  std::string       sql((const char *)buf, buf_size);
  Program *         program_root = parser(sql.c_str());
  if (program_root == nullptr) { return 0; }

  // TODO: Remove this uncessary try.
  // Or we will have exception from the parser?
  try {
    program_root->translate(ir_set);
  } catch (...) {
    for (auto ir : ir_set) {
      delete ir;
    }
    program_root->deep_delete();
  }
  program_root->deep_delete();

  mutated_tree = mutator->mutate_all(ir_set);
  deep_delete(ir_set[ir_set.size() - 1]);

  size_t validated_ir_size = mutator->validate_all(mutated_tree);
  for (auto ir : mutated_tree) {
    deep_delete(ir);
  }

  // std::cerr << "validated ir size: " << validated_ir_size << std::endl;

  return validated_ir_size;
}

size_t afl_custom_fuzz(SQLMutator *mutator, uint8_t *buf, size_t buf_size,
                       u8 **out_buf, uint8_t *add_buf,
                       size_t add_buf_size,  // add_buf can be NULL
                       size_t max_size) {
  assert(mutator->has_validated_test_cases());
  auto test_case = mutator->get_next_validated_test_case();
  *out_buf = test_case.first;
  return test_case.second;
}
}
