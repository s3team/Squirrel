#include <cassert>

#ifdef __SQUIRREL_SQLITE__
#include "sqlite.h"
#endif

#ifdef __SQUIRREL_MYSQL__
#include "mysql.h"
#endif

#ifdef __SQUIRREL_POSTGRESQL__
#include "postgresql.h"
#endif

//#include "db.h"

DataBase* create_database(YAML::Node config) {
  const std::string db_name = config["db"].as<std::string>();
  DataBase* result = nullptr;
  if (db_name == "sqlite") {
#ifdef __SQUIRREL_SQLITE__
    result = create_sqlite();
#endif
  } else if (db_name == "mysql") {
#ifdef __SQUIRREL_MYSQL__
    result = create_mysql();
#endif
  } else if (db_name == "postgresql") {
#ifdef __SQUIRREL_POSTGRESQL__
    result = create_postgresql();
#endif
  } else {
    assert(false && "Unreachable");
  }
  assert(result && "Unreachable");
  result->initialize(config);
  return result;
}
