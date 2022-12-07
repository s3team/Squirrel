cmake_minimum_required(VERSION 3.14)
project(Squirrel)

set(BUILD_SHARED_LIBS ON)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS} -g -O2 -fsanitize=address")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS} -O3")
set(LINK_FLAGS "${LINK_FLAGS} -fsanitize=address")
find_package(PkgConfig)

option(ALL "Build all types of database" ON)
option(SQLITE "Build sqlite" OFF)
option(MYSQL "Build mysql" OFF)
option(POSTGRESQL "Build postgresql" OFF)

if(SQLITE
   OR MYSQL
   OR POSTGRESQL)
  set(ALL OFF)
endif()

if(ALL)
  set(SQLITE ON)
  set(MYSQL ON)
  set(POSTGRESQL ON)
endif()

if(SQLITE)
  list(APPEND DBMS sqlite)
endif()

if(MYSQL)
  list(APPEND DBMS mysql)
  pkg_check_modules(MySQL REQUIRED mysqlclient>=5.7)
  add_library(mysql_client OBJECT srcs/internal/client/client_mysql.cc)
  target_include_directories(mysql_client PUBLIC ${MySQL_INCLUDE_DIRS}
                                                 srcs/internal/client)
  target_link_libraries(mysql_client PUBLIC ${MySQL_LIBRARIES}
                                            ${YAML_CPP_LIBRARIES})
  target_compile_options(mysql_client PRIVATE -fPIC)
  list(APPEND LINK_CLIENT mysql_client)
  list(APPEND CLIENT_DEFINITION __SQUIRREL_MYSQL__)
endif()

if(POSTGRESQL)
  list(APPEND DBMS postgresql)
  find_package(PostgreSQL REQUIRED)
  add_library(postgresql_client OBJECT
              srcs/internal/client/client_postgresql.cc)
  target_include_directories(postgresql_client PUBLIC ${PostgreSQL_INCLUDE_DIRS}
                                                      srcs/internal/client)
  target_link_libraries(
    postgresql_client PUBLIC ${PostgreSQL_LIBRARIES} ${YAML_CPP_LIBRARIES}
                             absl::strings absl::str_format)
  target_compile_options(postgresql_client PRIVATE -fPIC)
  list(APPEND LINK_CLIENT postgresql_client)
  list(APPEND CLIENT_DEFINITION __SQUIRREL_POSTGRESQL__)
endif()

include(FetchContent)
find_package(yaml-cpp REQUIRED)
# FetchContent_Declare( ${YAML_CPP_LIBRARIES} URL
# https://github.com/jbeder/${YAML_CPP_LIBRARIES}/archive/refs/tags/${YAML_CPP_LIBRARIES}-0.7.0.zip)
# FetchContent_MakeAvailable(${YAML_CPP_LIBRARIES})
include_directories(${YAML_INCLUDE_DIRS})

# set_target_properties(${YAML_CPP_LIBRARIES} PROPERTIES COMPILE_FLAGS "-w")

set(ABSL_PROPAGATE_CXX_STD ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -w")
add_subdirectory(third_party/abseil-cpp)
string(REPLACE " -w" "" CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")

set(AFLPP_DIR ${CMAKE_CURRENT_SOURCE_DIR}/AFLplusplus/include)

include_directories(${AFLPP_DIR})

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
  target_link_libraries(${dbms}_impl ${YAML_CPP_LIBRARIES} absl::strings
                        absl::str_format)

  string(TOUPPER ${dbms} UPPER_CASE_DBMS)
  add_library(${dbms}_mutator SHARED srcs/custom_mutator.cc srcs/db_factory.cc)
  target_link_libraries(${dbms}_mutator ${dbms}_impl config_validator)
  target_include_directories(${dbms}_mutator PRIVATE srcs/internal/${dbms} srcs)
  # target_compile_options(${dbms}_mutator PRIVATE -fPIC)
  target_compile_definitions(${dbms}_mutator
                             PRIVATE __SQUIRREL_${UPPER_CASE_DBMS}__)
endforeach()

if(MYSQL OR POSTGRESQL)
  add_executable(db_driver srcs/db_driver.cc)
  target_link_libraries(db_driver ${YAML_CPP_LIBRARIES} all_client
                        absl::strings absl::str_format)

  add_executable(test_client srcs/internal/client/test_client.cc)
  target_link_libraries(test_client all_client ${YAML_CPP_LIBRARIES})
  target_include_directories(test_client PUBLIC srcs/internal/client)

  add_library(all_client SHARED srcs/internal/client/client.cc)
  target_include_directories(all_client PUBLIC srcs/internal/client)
  target_link_libraries(all_client PUBLIC ${LINK_CLIENT})
  target_compile_definitions(all_client PRIVATE ${CLIENT_DEFINITION})
endif()

add_library(config_validator OBJECT srcs/utils/config_validate.cc)
target_link_libraries(config_validator PRIVATE ${YAML_CPP_LIBRARIES}
                                               absl::strings absl::str_format)
target_include_directories(config_validator PUBLIC srcs/utils)
target_compile_options(config_validator PRIVATE -fPIC)

include(lint.cmake)
add_subdirectory(tests)
