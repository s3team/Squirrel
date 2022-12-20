#include "config_validate.h"

#include <sys/stat.h>
#include <sys/types.h>

#include <iostream>
#include <string>
#include <string_view>

#include "absl/strings/str_format.h"

namespace {
constexpr std::string_view kSupportedDB[] = {"sqlite", "mysql", "postgresql",
                                             "mariadb"};
};

namespace utils {

bool path_exist(std::string_view path) {
  struct stat sb;
  return stat(path.data(), &sb) == 0;
}
bool validate_db_config(const YAML::Node& config) {
  if (!config["required"] || !config["db"]) {
    std::cerr
        << "You should set the `required` field and `db` for validity checks."
        << std::endl;
    return false;
  }

  if (!config["required"].IsSequence()) {
    std::cerr << "The `required` field should be a list." << std::endl;
    return false;
  }

  if (config["should_exist"]) {
    if (!config["should_exist"].IsSequence()) {
      return false;
    }
    for (std::size_t i = 0; i < config["should_exist"].size(); i++) {
      std::string key_should_exist =
          config["should_exist"].as<YAML::Node>()[i].as<std::string>();
      if (!config[key_should_exist]) {
        std::cerr << key_should_exist
                  << " is set in `should_exist` but is not a valid key!\n";
      }
      std::string file_should_exist =
          config[key_should_exist].as<std::string>();
      if (!path_exist(file_should_exist)) {
        std::cerr << file_should_exist << " doesn't exist!\n";
        return false;
      }
    }
  }

  for (std::size_t i = 0; i < config["required"].size(); i++) {
    std::string required_key =
        config["required"].as<YAML::Node>()[i].as<std::string>();
    if (!config[required_key]) {
      std::cerr << absl::StrFormat("The required field %s is not set.\n",
                                   required_key);
      return false;
    }
  }

  bool supported = false;
  for (auto db : kSupportedDB) {
    if (config["db"].as<std::string>() == db) {
      supported = true;
      break;
    }
  }

  if (!supported) {
    std::cerr << absl::StrFormat("%s is not supported by Squirrel yet.\n",
                                 config["db"].as<std::string>());
  }

  return supported;
}
};  // namespace utils
