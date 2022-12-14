#ifndef __CLIENT_POSTGRESQL_H__
#define __CLIENT_POSTGRESQL_H__

#include <cstddef>
#include <optional>
#include <string>

#include "client.h"
#include "yaml-cpp/yaml.h"

namespace client {

class PostgreSQLClient : public DBClient {
 public:
  virtual void initialize(YAML::Node);
  // Set up a clean environment for execution.
  virtual void prepare_env();
  virtual ExecutionStatus execute(const char *query, size_t size);
  virtual void clean_up_env();
  virtual bool check_alive();

 private:
  unsigned int database_id_ = 0;
  std::string host_;
  std::string port_;
  std::string user_name_;
  std::string passwd_;
  std::string sock_path_;
  std::string db_name_;
};

};  // namespace client

#endif
