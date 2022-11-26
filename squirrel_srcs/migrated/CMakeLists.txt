cmake_minimum_required(VERSION 3.14)
project(Squirrel)

# GoogleTest requires at least C++ 14
set(CMAKE_CXX_STANDARD 17)
set(BUILD_SHARED_LIBS ON)

set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS} -g -O2 -fsanitize=address")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS} -O3")
set(LINK_FLAGS "${LINK_FLAGS} -fsanitize=address")

find_package(PkgConfig)
pkg_check_modules(MySQL REQUIRED mysqlclient>=5.7)

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
FetchContent_Declare(
  yaml-cpp
  URL https://github.com/jbeder/yaml-cpp/archive/refs/tags/yaml-cpp-0.7.0.zip)
FetchContent_MakeAvailable(yaml-cpp)

enable_testing()

set(HEADER_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../../include)

include_directories(${HEADER_DIR})

add_library(sqlite_mutator SHARED srcs/custom_mutator.cc srcs/db.cc)

add_library(mysql_mutator SHARED srcs/custom_mutator.cc srcs/db.cc)

add_library(
  sqlite_impl OBJECT
  srcs/internal/sqlite/sqlite.cc
  srcs/internal/sqlite/sqlite.h
  srcs/internal/sqlite/srcs/ast.cpp
  srcs/internal/sqlite/srcs/mutator.cpp
  srcs/internal/sqlite/srcs/utils.cpp
  srcs/internal/sqlite/parser/bison_parser.cpp
  srcs/internal/sqlite/parser/flex_lexer.cpp)

add_library(
  mysql_impl OBJECT
  srcs/internal/mysql/mysql.cc
  srcs/internal/mysql/mysql.h
  srcs/internal/mysql/srcs/ast.cpp
  srcs/internal/mysql/srcs/mutator.cpp
  srcs/internal/mysql/srcs/utils.cpp
  srcs/internal/mysql/parser/bison_parser.cpp
  srcs/internal/mysql/parser/flex_lexer.cpp)

target_include_directories(sqlite_impl PRIVATE srcs/internal/sqlite/include
                                               srcs)
target_compile_options(sqlite_impl PRIVATE -fPIC)
target_link_libraries(sqlite_impl yaml-cpp)

target_include_directories(mysql_impl PRIVATE srcs/internal/mysql/include srcs)
target_compile_options(mysql_impl PRIVATE -fPIC)
target_link_libraries(mysql_impl yaml-cpp)

target_link_libraries(sqlite_mutator yaml-cpp sqlite_impl)
target_include_directories(sqlite_mutator PRIVATE srcs/internal/sqlite srcs)
target_compile_options(sqlite_mutator PRIVATE -fPIC)
target_compile_definitions(sqlite_mutator PRIVATE __SQUIRREL_SQLITE__)

target_link_libraries(mysql_mutator yaml-cpp mysql_impl)
target_include_directories(mysql_mutator PRIVATE srcs/internal/mysql srcs)
target_compile_options(mysql_mutator PRIVATE -fPIC)
target_compile_definitions(mysql_mutator PRIVATE __SQUIRREL_MYSQL__)

add_executable(db_driver srcs/db_driver.cc)
target_link_libraries(db_driver yaml-cpp all_client)

add_executable(test_client srcs/internal/client/test_client.cc)
target_link_libraries(test_client yaml-cpp all_client)
target_include_directories(test_client PUBLIC ${MySQL_INCLUDE_DIRS}
                                              srcs/internal/client)

add_library(all_client SHARED srcs/internal/client/client.cc)
target_include_directories(all_client PUBLIC ${MySQL_INCLUDE_DIRS}
                                             srcs/internal/client)
target_link_libraries(all_client PUBLIC yaml-cpp mysql_client)
target_compile_options(all_client PRIVATE -fPIC)

# MySQL client
add_library(mysql_client OBJECT srcs/internal/client/client_mysql.cc)
target_include_directories(mysql_client PUBLIC ${MySQL_INCLUDE_DIRS}
                                               srcs/internal/client)
target_link_libraries(mysql_client PUBLIC ${MySQL_LIBRARIES} yaml-cpp)
target_compile_options(mysql_client PRIVATE -fPIC)

include(GoogleTest)
# gtest_discover_tests(variable_check_test)

include(clang-format.cmake)
