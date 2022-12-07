#include <cassert>
#include <cstring>
#include <iostream>
#include <string>

#include "client.h"
#include "yaml-cpp/yaml.h"

int main(int argc, char **argv) {
  YAML::Node config = YAML::LoadFile(std::string(argv[1]));

  std::string db_name = config["db"].as<std::string>();
  // client::PostgreSQLClient *test_client = new client::PostgreSQLClient;
  client::DBClient *test_client = client::create_client(db_name, config);
  test_client->initialize(config);
  /*
  if (test_client.connect()) {
    std::cout << "Success!" << std::endl;
  } else {
    std::cout << "Failed!" << std::endl;
  }
  */

  const char *query = "select 1;";
  for (int i = 0; i < 0x100; ++i) {
    test_client->prepare_env();
    client::ExecutionStatus result = test_client->execute(query, strlen(query));
    assert(result == client::kNormal);
    test_client->clean_up_env();
  }
}
