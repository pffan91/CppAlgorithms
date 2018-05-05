cmake_minimum_required(VERSION 3.9)
set(CMAKE_CXX_STANDARD 17)
project(LINEAR_SEARCH)

enable_testing()

include_directories(src)
add_subdirectory(tests)
#add_subdirectory(tests_catch)
add_executable(LINEAR_SEARCH main.cpp)

