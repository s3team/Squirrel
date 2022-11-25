#include "client.h"

#include <cassert>
#include <string>

#include "client_mysql.h"
namespace client {
DBClient *create_client(const std::string &db_name, YAML::Node config) {
  DBClient *result = nullptr;
  if (db_name == "mysql") {
    result = new MySQLClient;
  } else {
    assert(false && "It is not supported!");
  }

  result->initialize(config);
  return result;
}
};  // namespace client
