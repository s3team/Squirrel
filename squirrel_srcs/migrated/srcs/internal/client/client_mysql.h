#ifndef __CLIENT_MYSQL_H__
#define __CLIENT_MYSQL_H__

#include <cstddef>
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

 private:
  bool connect();
  void disconnect();
  bool fix_database();
  ExecutionStatus execute_query(char *cmd);
  bool check_server_alive();
  int reset_database();
  ExecutionStatus clean_up_connection(MYSQL &);

  unsigned int database_id = 1;
  MYSQL m_;
  std::string host_;
  std::string user_name_;
  std::string passwd_;
  bool is_first_time_;
  unsigned counter_ = 0;  // odd for "test", even for "test2"
};

};  // namespace client

#endif
