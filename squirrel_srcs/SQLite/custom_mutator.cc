#include <fstream>
#include <memory>
#include <string>

#include "./include/ast.h"
#include "./include/mutator.h"
#include "./include/define.h"
#include "./include/utils.h"
#include "afl-fuzz.h"

class SQLMutator {
public:
  bool init(const string& file) {
    mutator_.init(file);
    return true;
  }

  std::vector<IR*> mutate_all(std::vector<IR*>& ir_set) {
    return mutator_.mutate_all(ir_set);
  }

  std::string validate(IR* ir) {
    return mutator_.validate(ir);
  }

private:
  Mutator mutator_;
  IR* g_current_ir;
};

extern "C" {

void *afl_custom_init(afl_state_t *afl, unsigned int seed) {
  SQLMutator* mutator = new SQLMutator{};

  const char* init_lib_path = afl->init_lib;
  vector<string> file_list = get_all_files_in_dir(init_lib_path);
  for (auto& f : file_list) {
    mutator->init(f);
  }
  return new SQLMutator{};
}

void afl_custom_deinit(void *data) {
  delete (SQLMutator*)data;
}

u8 afl_custom_queue_new_entry(void *data, const unsigned char *filename_new_queue, const unsigned int *filename_orig_queue){
  //TODO: Add the testcase into the library.
  return false;
}

// This might change to post_process.
size_t afl_custom_fuzz(void *data, uint8_t *buf, size_t buf_size,
                       uint8_t **out_buf, uint8_t *add_buf, size_t add_buf_size,
                       size_t max_size) {
  SQLMutator* mutator = static_cast<SQLMutator*>(data);
  std::vector<IR*> ir_set, mutated_tree;
  Program * program_root = parser((const char*)(buf));
  if (program_root == nullptr) {
    return 0;
  }

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

  for (auto ir : mutated_tree) {
    string ir_str = mutator->validate(ir);

    if (ir_str.empty()) {
      continue;
    }
  }

  // TODO
  return 0;
}

}