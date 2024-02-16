cmake_minimum_required(VERSION 3.16)

project(lab1)

add_subdirectory(lab1)

# search for clang-tidy
find_program(CXX_CLANG_TIDY NAMES "clang-tidy" REQUIRED)

# setup clang-tidy command from executable + options
set(CLANG_TIDY_COMMAND "${CXX_CLANG_TIDY}")

# set CXX_CLANG_TIDY property after defining the target
set_target_properties(lab1 PROPERTIES CXX_CLANG_TIDY "${CLANG_TIDY_COMMAND}")