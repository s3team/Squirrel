cmake_minimum_required(VERSION 3.14)
project(Squirrel)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 17)
set(BUILD_SHARED_LIBS ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt
    ON
    CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)
FetchContent_Declare(
  yaml-cpp
  URL https://github.com/jbeder/yaml-cpp/archive/refs/tags/yaml-cpp-0.7.0.zip)
FetchContent_MakeAvailable(yaml-cpp)

enable_testing()

set(HEADER_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../../include
               ${CMAKE_CURRENT_SOURCE_DIR}/include)

include_directories(${HEADER_DIR})

add_library(
  custom_mutator SHARED
  srcs/custom_mutator.cc src/ast.cpp src/mutator.cpp src/utils.cpp
  parser/bison_parser.cpp parser/flex_lexer.cpp)

target_link_libraries(custom_mutator yaml-cpp)

target_compile_options(custom_mutator PRIVATE -O3 -fsanitize=address -g -fPIC)

include(GoogleTest)
# gtest_discover_tests(variable_check_test)

include(clang-format.cmake)
