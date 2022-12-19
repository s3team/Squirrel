cmake_minimum_required(VERSION 3.14)
project(Squirrel)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows : Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt
    ON
    CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()
add_executable(
  db_config_test
  db_config_test.cc
)

target_link_libraries(
  db_config_test
  GTest::gtest_main
  yaml-cpp
  config_validator
)

include(GoogleTest)
gtest_discover_tests(db_config_test)

