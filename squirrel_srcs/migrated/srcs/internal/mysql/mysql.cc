#include "mysql.h"

#include "ast.h"
#include "define.h"
#include "mutator.h"
#include "utils.h"

#include <string>
#include <vector>

MySQLDB* create_mysql(){
    return new MySQLDB;
}

MySQLDB::MySQLDB(){
  mutator_ = std::make_unique<Mutator>();    
}

bool MySQLDB::initialize(YAML::Node config) {
  const std::string init_lib_path = config["init_lib"].as<std::string>();
  std::cerr << "Init path" << init_lib_path << std::endl;
  const std::string pragma_path = config["pragma"].as<std::string>();
  std::cerr << "pragma path" << pragma_path << std::endl;
  std::vector<std::string> file_list =
      get_all_files_in_dir(init_lib_path.c_str());
  for (auto &f : file_list) {
    std::cerr << "init lib: " << f << ", status ";
    mutator_->init(f, "", pragma_path);
  }
  return true;
}

bool MySQLDB::save_interesting_query(const std::string &query) {
  if (Program *program = parser(query)) {
    std::vector<IR *> ir_set;
    IR *ir = program->translate(ir_set);
    ir_set.clear();
    mutator_->extract_struct(ir);
    string strip_sql = ir->to_string();
    auto p_strip_sql = parser(strip_sql);
    if (p_strip_sql) {
      auto root_ir = p_strip_sql->translate(ir_set);
      p_strip_sql->deep_delete();
      mutator_->add_ir_to_library(root_ir);
      deep_delete(root_ir);
    }
    return true;
  }
  return false;
}

size_t MySQLDB::validate_all(const std::vector<IR *> &ir_set) {
  for (IR *ir : ir_set) {
    bool result = mutator_->validate(ir);
    if (!result) {
      continue;
    }
    std::string validated_ir = ir->to_string();
    unsigned char *buf = (unsigned char *)(strdup(validated_ir.c_str()));
    validated_test_cases_.push(std::make_pair(buf, validated_ir.size()));
  }
  return validated_test_cases_.size();
}

bool MySQLDB::has_mutated_test_cases() {
  return !validated_test_cases_.empty();
}

size_t MySQLDB::mutate(const std::string &query) {
  std::vector<IR *> ir_set, mutated_tree;
  Program *program_root = parser(query.c_str());
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

  mutated_tree = mutator_->mutate_all(ir_set);
  deep_delete(ir_set[ir_set.size() - 1]);

  size_t validated_ir_size = validate_all(mutated_tree);
  for (auto ir : mutated_tree) {
    deep_delete(ir);
  }

  // std::cerr << "validated ir size: " << validated_ir_size << std::endl;

  return validated_ir_size;
}
