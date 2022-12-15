#ifndef __CLIENT_MYSQL_H__
#define __CLIENT_MYSQL_H__

#include <cstddef>
#include <optional>
#include <string>

#include "client.h"
#include "mysql.h"
#include "yaml-cpp/yaml.h"

namespace client {

class MySQLClient : public DBClient {
 public:
  virtual void initialize(YAML::Node);
  // Set up a clean environment for execution.
  virtual void prepare_env();
  virtual ExecutionStatus execute(const char *query, size_t size);
  virtual void clean_up_env();
  virtual bool check_alive();

 private:
  ExecutionStatus clean_up_connection(MYSQL &);
  bool create_database(const std::string &database);
  std::optional<MYSQL> create_connection(const std::string_view db_name);

  unsigned int database_id_ = 0;
  std::string host_;
  std::string user_name_;
  std::string passwd_;
  std::string sock_path_;
  std::string db_prefix_;
};

};  // namespace client

#endif
