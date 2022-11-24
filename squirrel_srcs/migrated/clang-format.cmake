# additional target to perform clang-format run, requires clang-format

# get all project files
file(GLOB_RECURSE ALL_SOURCE_FILES srcs/* include/* src/*)
# foreach(SOURCE_FILE ${ALL_SOURCE_FILES}) string(FIND ${SOURCE_FILE}
# ${PROJECT_TRDPARTY_DIR} PROJECT_TRDPARTY_DIR_FOUND) if(NOT
# ${PROJECT_TRDPARTY_DIR_FOUND} EQUAL -1) list(REMOVE_ITEM ALL_SOURCE_FILES
# ${SOURCE_FILE}) endif() endforeach()

set(clangformat_style "{BasedOnStyle: Google, IndentWidth: 2}")
add_custom_target(clangformat ALL clang-format -style=${clangformat_style} -i
                                  ${ALL_SOURCE_FILES})
