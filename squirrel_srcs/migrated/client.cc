#include "mysql.h"
#include "mysqld_error.h"
#include <deque>
#include <string>
#include <unistd.h>
#include <cstring>

using namespace std;

enum SQLSTATUS {
  kConnectFailed,
  kExecuteError,
  kServerCrash,
  kNormal,
  kTimeout,
  kSyntaxError,
  kSemanticError
};

deque<char *> g_previous_input;
class MysqlClient {
 public:
  MysqlClient(const char *host, char *user_name, char *passwd)
      : host_(host), user_name_(user_name), passwd_(passwd), counter_(0) {
  }

  bool connect() {
    string dbname;

    if (mysql_init(&m_) == NULL) return false;

    dbname = "test" + std::to_string(database_id);
    if (mysql_real_connect(&m_, host_, user_name_, passwd_, dbname.c_str(), 0,
                           NULL, CLIENT_MULTI_STATEMENTS) == NULL) {
      fprintf(stderr, "Connection error1 \n", mysql_errno(&m_),
              mysql_error(&m_));
      disconnect();
      counter_++;
      return false;
    }

    return true;
  }

  void disconnect() {
    mysql_close(&m_);
  }

  bool fix_database() {
    MYSQL tmp_m;

    database_id += 1;
    if (mysql_init(&tmp_m) == NULL) {
      mysql_close(&tmp_m);
      return false;
    }
    if (mysql_real_connect(&tmp_m, host_, user_name_, passwd_, "duck", 0, NULL,
                           CLIENT_MULTI_STATEMENTS) == NULL) {
      fprintf(stderr, "Connection error3 \n", mysql_errno(&tmp_m),
              mysql_error(&tmp_m));
      mysql_close(&tmp_m);
      return false;
    }
    string cmd = "CREATE DATABASE IF NOT EXISTS test" +
                 std::to_string(database_id) + ";";
    mysql_real_query(&tmp_m, cmd.c_str(), cmd.size());
    mysql_close(&tmp_m);
    sleep(2);
    return true;
  }

  SQLSTATUS clean_up_connection(MYSQL &mm) {
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

  SQLSTATUS execute(char *cmd) {
    auto conn = connect();

    if (!conn) {
      string previous_inputs = "";
      int    crash_fd = -1;
      for (auto i : g_previous_input)
        previous_inputs += string(i) + "\n\n";
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

  bool check_server_alive() {
    MYSQL tmp_m;

    if (mysql_init(&tmp_m) == NULL) {
      mysql_close(&tmp_m);
      return false;
    }
    if (mysql_real_connect(&tmp_m, host_, user_name_, passwd_, "duck", 0, NULL,
                           CLIENT_MULTI_STATEMENTS) == NULL) {
      fprintf(stderr, "Connection error2 \n", mysql_errno(&tmp_m),
              mysql_error(&tmp_m));
      mysql_close(&tmp_m);
      return false;
    }
    mysql_close(&tmp_m);
    return true;
  }

  int reset_database() {
    int server_response;

    string reset_query =
        "DROP DATABASE IF EXISTS test" + std::to_string(database_id) + ";";
    reset_query += "CREATE DATABASE IF NOT EXISTS test" +
                   std::to_string(database_id + 1) + ";";

    auto tmp_res =
        mysql_real_query(&m_, reset_query.c_str(), reset_query.size());
    database_id++;

    return server_response;
  }

  char *get_next_database_name() {
    if (counter_ % 2 == 0) return "test2";

    return "test";
  }

 private:
  unsigned int database_id = 1;
  MYSQL        m_;
  const char * host_;
  // string db_name_;
  char *user_name_;
  char *passwd_;
  bool  is_first_time;
  unsigned counter_;  // odd for "test", even for "test2"
};
