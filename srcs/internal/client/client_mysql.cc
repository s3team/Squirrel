#include "client_mysql.h"

#include <unistd.h>

#include <cstring>
#include <deque>
#include <iostream>
#include <optional>
#include <string>
#include <string_view>

#include "mysql.h"
#include "mysqld_error.h"

using namespace std;
namespace {
bool is_crash_response(int response) {
  return response == CR_SERVER_LOST || response == CR_SERVER_GONE_ERROR;
}
};  // namespace

namespace client {

void MySQLClient::initialize(YAML::Node config) {
  host_ = config["host"].as<std::string>();
  user_name_ = config["user_name"].as<std::string>();
  passwd_ = config["passwd"].as<std::string>();
  sock_path_ = config["sock_path"].as<std::string>();
  db_prefix_ = config["db_prefix"].as<std::string>();
  std::cerr << "Sock path: " << sock_path_ << std::endl;
}

void MySQLClient::prepare_env() {
  ++database_id_;
  std::string database_name = db_prefix_ + std::to_string(database_id_);
  while (!create_database(database_name)) {
    std::cerr << "Failed to create database." << std::endl;
    sleep(4);
  }
}

ExecutionStatus MySQLClient::execute(const char *query, size_t size) {
  // Create a connection for executing the query
  // Check the response.
  // Return status accordingly.
  std::string database_name = db_prefix_ + std::to_string(database_id_);
  std::optional<MYSQL> connection = create_connection(database_name);
  if (!connection.has_value()) {
    return kServerCrash;
  }

  int server_response = mysql_real_query(&(*connection), query, size);
  if (is_crash_response(server_response)) {
    mysql_close(&(*connection));
    return kServerCrash;
  }

  // TODO: Check the result.
  clean_up_connection(*connection);
  mysql_close(&(*connection));
  return kNormal;
}

void MySQLClient::clean_up_env() {
  std::string database_name = db_prefix_ + std::to_string(database_id_);
  string reset_query = "DROP DATABASE IF EXISTS " + database_name + ";";
  std::optional<MYSQL> connection = create_connection("");
  if (!connection.has_value()) {
    std::cerr << "Impossiable" << std::endl;
    exit(-1);
  }
  int server_response =
      mysql_real_query(&(*connection), reset_query.c_str(), reset_query.size());
  std::cerr << "Cmd: " << reset_query << ", " << server_response << ", "
            << mysql_error(&(*connection)) << std::endl;
  mysql_close(&(*connection));
}

std::optional<MYSQL> MySQLClient::create_connection(std::string_view db_name) {
  MYSQL result;
  if (mysql_init(&result) == NULL) return std::nullopt;

  // std::string dbname = db_prefix_ + std::to_string(database_id_);
  if (mysql_real_connect(&result, host_.c_str(), user_name_.c_str(),
                         passwd_.c_str(), db_name.data(), 0, sock_path_.c_str(),
                         CLIENT_MULTI_STATEMENTS) == NULL) {
    std::cerr << "Connection error1: " << mysql_errno(&m_) << mysql_error(&m_)
              << std::endl;
    disconnect();
    mysql_close(&result);
    return std::nullopt;
  }

  return result;
}

ExecutionStatus MySQLClient::execute_query(char *cmd) {
  auto conn = connect();

  if (!conn) {
    string previous_inputs = "";
    int crash_fd = -1;
    // for (auto i : g_previous_input) previous_inputs += string(i) + "\n\n";
    previous_inputs += "-------------\n\n";
    write(crash_fd, previous_inputs.c_str(), previous_inputs.size());
  }

  int retry_time = 0;
  while (!conn) {
    // cout << "reconnecting..." << endl;
    sleep(5);
    conn = connect();
    if (!conn) fix_database();
  }
  // cout << "connect succeed!" << endl;
  // cerr << "Trying to execute " << cmd << endl;
  int server_response = mysql_real_query(&m_, cmd, strlen(cmd));
  std::cerr << "Server response: " << server_response << std::endl;
  std::cerr << "Server error: " << mysql_errno(&m_) << std::endl;

  clean_up_connection(m_);
  // auto correctness = clean_up_connection(m_);

  if (server_response == CR_SERVER_LOST ||
      server_response == CR_SERVER_GONE_ERROR) {
    disconnect();
    return kServerCrash;
  }

  auto res = kNormal;
  auto check_res = check_alive();
  if (check_res == false) {
    disconnect();
    sleep(2);  // waiting for server to be up again
    return kServerCrash;
  }

  reset_database();

  disconnect();
  return res;
}

bool MySQLClient::check_alive() {
  MYSQL tmp_m;

  if (mysql_init(&tmp_m) == NULL) {
    mysql_close(&tmp_m);
    return false;
  }
  if (mysql_real_connect(&tmp_m, host_.c_str(), user_name_.c_str(),
                         passwd_.c_str(), "duck", 0, sock_path_.c_str(),
                         CLIENT_MULTI_STATEMENTS) == NULL) {
    fprintf(stderr, "Connection error2 %d, %s\n", mysql_errno(&tmp_m),
            mysql_error(&tmp_m));
    mysql_close(&tmp_m);
    return false;
  }
  mysql_close(&tmp_m);
  return true;
}

int MySQLClient::reset_database() {
  int server_response;

  string reset_query =
      "DROP DATABASE IF EXISTS test" + std::to_string(database_id_) + ";";
  reset_query += "CREATE DATABASE IF NOT EXISTS test" +
                 std::to_string(database_id_ + 1) + ";";

  // TODO: Check the result.
  mysql_real_query(&m_, reset_query.c_str(), reset_query.size());
  database_id_++;

  return server_response;
}

bool MySQLClient::connect() {
  if (mysql_init(&m_) == NULL) return false;

  std::string dbname = "test" + std::to_string(database_id_);
  dbname.clear();
  if (mysql_real_connect(&m_, host_.c_str(), user_name_.c_str(),
                         passwd_.c_str(), dbname.c_str(), 0, sock_path_.c_str(),
                         CLIENT_MULTI_STATEMENTS) == NULL) {
    std::cerr << "Connection error1: " << mysql_errno(&m_) << mysql_error(&m_)
              << std::endl;
    disconnect();
    return false;
  }

  return true;
}

void MySQLClient::disconnect() { mysql_close(&m_); }

bool MySQLClient::fix_database() {
  MYSQL tmp_m;

  database_id_ += 1;
  if (mysql_init(&tmp_m) == NULL) {
    mysql_close(&tmp_m);
    return false;
  }
  if (mysql_real_connect(&tmp_m, host_.c_str(), user_name_.c_str(),
                         passwd_.c_str(), "duck", 0, sock_path_.c_str(),
                         CLIENT_MULTI_STATEMENTS) == NULL) {
    mysql_close(&tmp_m);
    return false;
  }
  string cmd =
      "CREATE DATABASE IF NOT EXISTS test" + std::to_string(database_id_) + ";";
  mysql_real_query(&tmp_m, cmd.c_str(), cmd.size());
  mysql_close(&tmp_m);
  sleep(2);
  return true;
}

bool MySQLClient::create_database(const std::string &database) {
  MYSQL tmp_m;

  if (mysql_init(&tmp_m) == NULL) {
    mysql_close(&tmp_m);
    return false;
  }

  if (mysql_real_connect(&tmp_m, host_.c_str(), user_name_.c_str(),
                         passwd_.c_str(), nullptr, 0, sock_path_.c_str(),
                         CLIENT_MULTI_STATEMENTS) == NULL) {
    fprintf(stderr, "Connection error3 %d, %s\n", mysql_errno(&tmp_m),
            mysql_error(&tmp_m));
    mysql_close(&tmp_m);
    return false;
  }

  string cmd = "CREATE DATABASE IF NOT EXISTS " + database + ";";
  // TODO: Check server response status.
  int server_response = mysql_real_query(&tmp_m, cmd.c_str(), cmd.size());
  std::cerr << "Server response: " << server_response << std::endl;
  mysql_close(&tmp_m);
  return true;
}

ExecutionStatus MySQLClient::clean_up_connection(MYSQL &mm) {
  int res = -1;
  do {
    auto q_result = mysql_store_result(&mm);
    if (q_result) mysql_free_result(q_result);
  } while ((res = mysql_next_result(&mm)) == 0);

  if (res != -1) {
    if (mysql_errno(&mm) == 1064) {
      std::cerr << "Syntax error" << std::endl;
      return kSyntaxError;
    } else {
      std::cerr << "Semantic error" << std::endl;
      return kSemanticError;
    }
  }
  std::cerr << "Normal" << std::endl;
  return kNormal;
}
};  // namespace client
