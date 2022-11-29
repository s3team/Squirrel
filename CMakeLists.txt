cmake_minimum_required(VERSION 3.14)
project(Squirrel)

set(BUILD_SHARED_LIBS ON)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS} -g -O2 -fsanitize=address")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS} -O3")
set(LINK_FLAGS "${LINK_FLAGS} -fsanitize=address")

find_package(PkgConfig)
pkg_check_modules(MySQL REQUIRED mysqlclient>=5.7)

find_package(PostgreSQL REQUIRED)

include(FetchContent)

FetchContent_Declare(
  yaml-cpp
  URL https://github.com/jbeder/yaml-cpp/archive/refs/tags/yaml-cpp-0.7.0.zip)
FetchContent_MakeAvailable(yaml-cpp)

add_subdirectory(third_party/abseil-cpp)

set(AFLPP_DIR ${CMAKE_CURRENT_SOURCE_DIR}/AFLplusplus/include)

include_directories(${AFLPP_DIR})

list(APPEND DBMS sqlite mysql postgresql)

foreach(dbms IN LISTS DBMS)
  add_library(
    ${dbms}_impl OBJECT
    srcs/internal/${dbms}/${dbms}.cc
    srcs/internal/${dbms}/${dbms}.h
    srcs/internal/${dbms}/srcs/ast.cpp
    srcs/internal/${dbms}/srcs/mutator.cpp
    srcs/internal/${dbms}/srcs/utils.cpp
    srcs/internal/${dbms}/parser/bison_parser.cpp
    srcs/internal/${dbms}/parser/flex_lexer.cpp)
  target_include_directories(${dbms}_impl PRIVATE srcs/internal/${dbms}/include
                                                  srcs)
  target_compile_options(${dbms}_impl PRIVATE -fPIC)
  target_link_libraries(${dbms}_impl yaml-cpp absl::strings absl::str_format)

  string(TOUPPER ${dbms} UPPER_CASE_DBMS)
  add_library(${dbms}_mutator SHARED srcs/custom_mutator.cc srcs/db_factory.cc)
  target_link_libraries(${dbms}_mutator ${dbms}_impl config_validator)
  target_include_directories(${dbms}_mutator PRIVATE srcs/internal/${dbms} srcs)
  # target_compile_options(${dbms}_mutator PRIVATE -fPIC)
  target_compile_definitions(${dbms}_mutator
                             PRIVATE __SQUIRREL_${UPPER_CASE_DBMS}__)
endforeach()

add_executable(db_driver srcs/db_driver.cc)
target_link_libraries(db_driver yaml-cpp all_client absl::strings
                      absl::str_format)

add_executable(test_client srcs/internal/client/test_client.cc)
target_link_libraries(test_client all_client)
target_include_directories(test_client PUBLIC srcs/internal/client)

add_library(all_client SHARED srcs/internal/client/client.cc)
target_include_directories(all_client PUBLIC srcs/internal/client)
target_link_libraries(all_client PUBLIC mysql_client postgresql_client)

# MySQL client
add_library(mysql_client OBJECT srcs/internal/client/client_mysql.cc)
target_include_directories(mysql_client PUBLIC ${MySQL_INCLUDE_DIRS}
                                               srcs/internal/client)
target_link_libraries(mysql_client PUBLIC ${MySQL_LIBRARIES} yaml-cpp)
target_compile_options(mysql_client PRIVATE -fPIC)

add_library(postgresql_client OBJECT srcs/internal/client/client_postgresql.cc)
target_include_directories(postgresql_client PUBLIC ${PostgreSQL_INCLUDE_DIRS}
                                                    srcs/internal/client)
target_link_libraries(postgresql_client PUBLIC ${PostgreSQL_LIBRARIES} yaml-cpp
                                               absl::strings absl::str_format)
target_compile_options(postgresql_client PRIVATE -fPIC)

add_library(config_validator OBJECT srcs/utils/config_validate.cc)
target_link_libraries(config_validator PRIVATE yaml-cpp absl::strings absl::str_format)
target_include_directories(config_validator PUBLIC srcs/utils)
target_compile_options(config_validator PRIVATE -fPIC)


include(lint.cmake)
add_subdirectory(tests)

