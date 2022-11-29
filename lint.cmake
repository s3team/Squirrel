# additional target to perform clang - format run, requires clang - format

# get all project files
file(GLOB_RECURSE ALL_SOURCE_FILES srcs/*.cc srcs/*.cpp srcs/*.h)
# foreach(SOURCE_FILE ${ALL_SOURCE_FILES}) string(FIND ${SOURCE_FILE}
# ${PROJECT_TRDPARTY_DIR} PROJECT_TRDPARTY_DIR_FOUND) if(NOT
# ${PROJECT_TRDPARTY_DIR_FOUND} EQUAL -1) list(REMOVE_ITEM ALL_SOURCE_FILES
# ${SOURCE_FILE}) endif() endforeach()

# set(clangformat_style "{BasedOnStyle: Google, IndentWidth: 2}")
add_custom_target(clangformat COMMAND clang-format -style=file -i
                                      ${ALL_SOURCE_FILES})

add_custom_target(formatcheck COMMAND clang-format -style=file --Werror
                                      ${ALL_SOURCE_FILES})

file(GLOB ALL_NEW_FILES srcs/*.cc srcs/*.h srcs/internal/*/*.h
     srcs/internal/*/*.cc
     srcs/utils/*
     )
add_custom_target(
  lint
  COMMAND
    clang-tidy
    # -p build)
    ${ALL_NEW_FILES} -p build)
