#ifndef __MYSQL_H__
#define __MYSQL_H__
#include <memory>
#include <stack>

#include "db.h"

class Mutator;
class IR;

class MySQLDB : public DataBase {
 public:
  MySQLDB();
  // Set up the database.
  virtual bool initialize(YAML::Node config);
  virtual size_t mutate(const std::string &);
  virtual bool save_interesting_query(const std::string &);
  // Return an new query to test. The `buffer` should be unmanaged,
  virtual std::string get_next_mutated_query();
  virtual bool has_mutated_test_cases();
  // Clean up the enviroment, e.g., drop all the databases.
  virtual bool clean_up() { return true; }

 private:
  size_t validate_all(std::vector<IR *> &ir_set);
  std::unique_ptr<Mutator> mutator_;
  std::stack<std::string> validated_test_cases_;
};

MySQLDB *create_mysql();
#endif
