#ifndef __UTILS_CONFIG_VALIDATE__
#define __UTILS_CONFIG_VALIDATE__
#include <string_view>

#include "yaml-cpp/yaml.h"
namespace utils {

// Check whether the configuration is Ok.
bool validate_db_config(const YAML::Node&);
bool path_exist(std::string_view);
};  // namespace utils

#endif  //__UTILS_CONFIG_VALIDATE__
