cmake_minimum_required(VERSION 3.9)
set(CMAKE_CXX_STANDARD 17)
project(INSERTION_SORT)

enable_testing()

include_directories(src)
add_subdirectory(tests)
add_executable(INSERTION_SORT main.cpp)

