cmake_minimum_required(VERSION 3.1)
project(CPP_project)

set(CMAKE_CXX_STANDARD 11)
# set(CMAKE_BUILD_TYPE Debug)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

# Hello world
add_executable(hello_world src/Hello_world.cpp)

# using all loops
add_executable(loops_test src/all_loops.cpp)
