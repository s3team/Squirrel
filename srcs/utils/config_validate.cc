#include "config_validate.h"

#include <iostream>
#include <string>

#include "absl/strings/str_format.h"

namespace {
constexpr std::string_view kSupportedDB[] = {"sqlite", "mysql", "postgresql",
                                             "mariadb"};
};

namespace utils {
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
