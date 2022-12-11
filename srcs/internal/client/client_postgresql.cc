#include "client_postgresql.h"

#include <unistd.h>

#include <cstring>
#include <deque>
#include <iostream>
#include <optional>
#include <string>
#include <string_view>

#include "absl/strings/str_format.h"
#include "client.h"
#include "libpq-fe.h"

using namespace std;
namespace {
PGconn *create_connection(std::string_view db_name) {
  std::string conninfo =
      absl::StrFormat("hostaddr=%s port=%d dbname=%s connect_timeout=4",
                      "127.0.0.1", 5432, db_name);

  std::cerr << "Connection info: " << conninfo << std::endl;
  PGconn *result = PQconnectdb(conninfo.c_str());
  if (PQstatus(result) == CONNECTION_BAD) {
    fprintf(stderr, "Error1: %s\n", PQerrorMessage(result));
    std::cerr << "BAd" << std::endl;
  }
  return result;
}

void reset_database(PGconn *conn) {
  auto res = PQexec(conn, "DROP SCHEMA public CASCADE; CREATE SCHEMA public;");
  PQclear(res);
}
};  // namespace

namespace client {

void PostgreSQLClient::initialize(YAML::Node config) {
  host_ = config["host"].as<std::string>();
  port_ = config["port"].as<std::string>();
  user_name_ = config["user_name"].as<std::string>();
  passwd_ = config["passwd"].as<std::string>();
  sock_path_ = config["sock_path"].as<std::string>();
  db_prefix_ = config["db_prefix"].as<std::string>();
  std::cerr << "Sock path: " << sock_path_ << std::endl;
}

void PostgreSQLClient::prepare_env() {
  PGconn *conn = create_connection("x");
  reset_database(conn);
  PQfinish(conn);
}

ExecutionStatus PostgreSQLClient::execute(const char *query, size_t size) {
  auto conn = create_connection("x");

  if (PQstatus(conn) != CONNECTION_OK) {
    fprintf(stderr, "Error2: %s\n", PQerrorMessage(conn));
    PQfinish(conn);
    return kServerCrash;
  }

  std::string cmd(query, size);

  auto res = PQexec(conn, cmd.c_str());
  if (PQstatus(conn) != CONNECTION_OK) {
    fprintf(stderr, "Error3: %s\n", PQerrorMessage(conn));
    PQclear(res);
    return kServerCrash;
  }

  if (PQresultStatus(res) != PGRES_COMMAND_OK &&
      PQresultStatus(res) != PGRES_TUPLES_OK) {
    fprintf(stderr, "Error4: %s\n", PQerrorMessage(conn));
    PQclear(res);
    PQfinish(conn);
    return kExecuteError;
  }
  PQclear(res);
  PQfinish(conn);
  return kNormal;
}

void PostgreSQLClient::clean_up_env() {}

bool PostgreSQLClient::check_alive() {
  std::string conninfo = absl::StrFormat(
      "hostaddr=%s port=%d connect_timeout=4", "127.0.0.1", 5432);
  PGPing res = PQping(conninfo.c_str());
  return res == PQPING_OK;
}
}  // namespace client
