#include "client_mysql.h"

#include <unistd.h>

#include <cstring>
#include <deque>
#include <iostream>
#include <string>

#include "mysql.h"
#include "mysqld_error.h"

using namespace std;

namespace client {

void MySQLClient::initialize(YAML::Node config) {
  host_ = config["host"].as<std::string>();
  user_name_ = config["user_name"].as<std::string>();
  passwd_ = config["passwd"].as<std::string>();
}

void MySQLClient::prepare_env() {}

ExecutionStatus MySQLClient::execute(const char *query, size_t size) {
  return kServerCrash;
}

void MySQLClient::clean_up_env() {}

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

  auto correctness = clean_up_connection(m_);

  if (server_response == CR_SERVER_LOST ||
      server_response == CR_SERVER_GONE_ERROR) {
    disconnect();
    return kServerCrash;
  }

  auto res = kNormal;
  auto check_res = check_server_alive();
  if (check_res == false) {
    disconnect();
    sleep(2);  // waiting for server to be up again
    return kServerCrash;
  }

  reset_database();

  counter_++;
  disconnect();
  return res;
}

bool MySQLClient::check_server_alive() {
  MYSQL tmp_m;

  if (mysql_init(&tmp_m) == NULL) {
    mysql_close(&tmp_m);
    return false;
  }
  if (mysql_real_connect(&tmp_m, host_.c_str(), user_name_.c_str(),
                         passwd_.c_str(), "duck", 0, NULL,
                         CLIENT_MULTI_STATEMENTS) == NULL) {
    fprintf(stderr, "Connection error2 \n", mysql_errno(&tmp_m),
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
      "DROP DATABASE IF EXISTS test" + std::to_string(database_id) + ";";
  reset_query += "CREATE DATABASE IF NOT EXISTS test" +
                 std::to_string(database_id + 1) + ";";

  auto tmp_res = mysql_real_query(&m_, reset_query.c_str(), reset_query.size());
  database_id++;

  return server_response;
}

/*
char *get_next_database_name() {
  if (counter_ % 2 == 0) return "test2";

  return "test";
}
*/

bool MySQLClient::connect() {
  if (mysql_init(&m_) == NULL) return false;

  std::string dbname = "test" + std::to_string(database_id);
  if (mysql_real_connect(&m_, host_.c_str(), user_name_.c_str(),
                         passwd_.c_str(), dbname.c_str(), 0, NULL,
                         CLIENT_MULTI_STATEMENTS) == NULL) {
    std::cerr << "Connection error1: " << mysql_errno(&m_) << mysql_error(&m_)
              << std::endl;
    disconnect();
    counter_++;
    return false;
  }

  return true;
}

void MySQLClient::disconnect() { mysql_close(&m_); }

bool MySQLClient::fix_database() {
  MYSQL tmp_m;

  database_id += 1;
  if (mysql_init(&tmp_m) == NULL) {
    mysql_close(&tmp_m);
    return false;
  }
  if (mysql_real_connect(&tmp_m, host_.c_str(), user_name_.c_str(),
                         passwd_.c_str(), "duck", 0, NULL,
                         CLIENT_MULTI_STATEMENTS) == NULL) {
    fprintf(stderr, "Connection error3 \n", mysql_errno(&tmp_m),
            mysql_error(&tmp_m));
    mysql_close(&tmp_m);
    return false;
  }
  string cmd =
      "CREATE DATABASE IF NOT EXISTS test" + std::to_string(database_id) + ";";
  mysql_real_query(&tmp_m, cmd.c_str(), cmd.size());
  mysql_close(&tmp_m);
  sleep(2);
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
      return kSyntaxError;
    } else {
      return kSemanticError;
    }
  }
  return kNormal;
}
};  // namespace client
