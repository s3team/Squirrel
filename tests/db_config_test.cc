#include <gtest/gtest.h>
#include "yaml-cpp/yaml.h"
#include "config_validate.h"

TEST(ConfigValidatorTest, DBTypeNotSupported) {
  const char* kConfig = R"V0G0N(
  init_lib: x
  pragma: x
  db: sqlite3
  )V0G0N";
  
  YAML::Node config = YAML::Load(kConfig);
  EXPECT_FALSE(utils::validate_db_config(config)) << kConfig;
}

TEST(ConfigValidatorTest, RequiredNotSet) {
  const char* kConfig = R"V0G0N(
  init_lib: x
  pragma: x
  db: sqlite
  )V0G0N";

  YAML::Node config = YAML::Load(kConfig);
  EXPECT_FALSE(utils::validate_db_config(config));
}

TEST(ConfigValidatorTest, EveryRequiredKeywordShouldBeSet) {
  const char* kConfig = R"V0G0N(
  required: ["init_lib", "pragma", "db"]
  pragma: x
  db: sqlite
  )V0G0N";

  YAML::Node config = YAML::Load(kConfig);
  EXPECT_FALSE(utils::validate_db_config(config));
}

TEST(ConfigValidatorTest, MissingFilesInShoulExistIsNotAllowed) {
  const char* kConfig = R"V0G0N(
  required: ["init_lib", "pragma", "db"]
  should_exist: ["pragma"]
  pragma: "/file/not/exist"
  init_lib: x
  db: sqlite
  )V0G0N";

  YAML::Node config = YAML::Load(kConfig);
  EXPECT_FALSE(utils::validate_db_config(config));
}

TEST(ConfigValidatorTest, CorrectlyConfiguredFileReturnTrue) {
  const char* kConfig = R"V0G0N(
  required: ["init_lib", "pragma", "db"]
  should_exist: ["pragma", "init_lib"]
  pragma: "/bin/sh"
  init_lib: "/bin"
  db: sqlite
  )V0G0N";

  YAML::Node config = YAML::Load(kConfig);
  EXPECT_TRUE(utils::validate_db_config(config));
}
