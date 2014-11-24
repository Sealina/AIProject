cmake_minimum_required( VERSION 2.8 )

#cmake module
set(CMAKE_MODULE_PATH "C:/Users/Haizhou/Documents/GitHub/CMake")

include(SetOutputDirectories)
include(SourceFileScanner)

parse_directory_name(SOLUTION_NAME)
project(${SOLUTION_NAME})
setup_solution(${SOLUTION_NAME})
