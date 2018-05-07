cmake_minimum_required(VERSION 3.10)
project(SELECTION_SORT)

set(CMAKE_CXX_STANDARD 17)

enable_testing()

include_directories(src)
#add_subdirectory(tests)
add_subdirectory(tests_catch)

add_executable(SELECTION_SORT main.cpp)