#include <fstream>
#include <memory>
#include <string>
#include <stack>
#include <iostream>

#include "./include/ast.h"
#include "./include/mutator.h"
#include "./include/define.h"
#include "./include/utils.h"
#include "afl-fuzz.h"

class SQLMutator {
 public:
  bool init(const string &file) {
    mutator_.init(file);
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
  std::cerr << "Init me!" << std::endl;
  SQLMutator *mutator = new SQLMutator{};

  const char *   init_lib_path = (const char *)(afl->init_lib);
  vector<string> file_list = get_all_files_in_dir(init_lib_path, true);
  for (auto &f : file_list) {
    std::cerr << "init lib: " << f << ", status ";
    if(mutator->init(f)){
        std::cerr << "Success" << std::endl; 
    }else{
        std::cerr << "Failed" << std::endl; 
    }
  }
  return mutator;
}

void afl_custom_deinit(void *data) {
  delete (SQLMutator *)data;
}

u8 afl_custom_queue_new_entry(void *               data,
                              const unsigned char *filename_new_queue,
                              const unsigned char *filename_orig_queue) {
  SQLMutator *mutator = static_cast<SQLMutator *>(data);

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
  //std::cerr << "add to library: " << filename_new_queue << std::endl;
  return false;
}

unsigned int afl_custom_fuzz_count(void *data, const unsigned char *buf,
                                   size_t buf_size) {
  SQLMutator *      mutator = static_cast<SQLMutator *>(data);
  std::vector<IR *> ir_set, mutated_tree;
  /*
  std::cerr << "buf_size: " << buf_size << std::endl;
  std::cerr << "buf: " << (const char *)buf << std::endl;
  std::cerr << "Calculated buf size: " << strlen((const char *)buf)
            << std::endl;
            */
  std::string sql((const char *)buf, buf_size);
  Program *   program_root = parser(sql.c_str());
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

  //std::cerr << "validated ir size: " << validated_ir_size << std::endl;

  return validated_ir_size;
}

size_t afl_custom_fuzz(void *data, uint8_t *buf, size_t buf_size, u8 **out_buf,
                       uint8_t *add_buf,
                       size_t   add_buf_size,  // add_buf can be NULL
                       size_t   max_size) {
  SQLMutator *mutator = static_cast<SQLMutator *>(data);
  assert(mutator->has_validated_test_cases());
  auto test_case = mutator->get_next_validated_test_case();
  *out_buf = test_case.first;
  return test_case.second;

}

//size_t afl_custom_post_process(void *data, unsigned char *buf, size_t buf_size,
//                               unsigned char **out_buf) {
//  std::cerr << "post process" << std::endl;

//}
}
