#include "client.h"

#include <cassert>
#include <string>

#ifdef __SQUIRREL_MYSQL__
#include "client_mysql.h"
#endif

#ifdef __SQUIRREL_POSTGRESQL__
#include "client_postgresql.h"
#endif

namespace client {
DBClient *create_client(const std::string &db_name, const YAML::Node &config) {
  DBClient *result = nullptr;
  if (db_name == "mysql") {
#ifdef __SQUIRREL_MYSQL__
    result = new MySQLClient;
#endif
  } else if (db_name == "postgresql") {
#ifdef __SQUIRREL_POSTGRESQL__
    result = new PostgreSQLClient;
#endif
  } else {
    assert(false && "It is not supported!");
  }
  assert(result && "It is not supported!");

  result->initialize(config);
  return result;
}
};  // namespace client
