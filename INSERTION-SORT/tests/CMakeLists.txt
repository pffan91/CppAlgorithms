file(GLOB TESTS_SRCS *.cpp)
file(MAKE_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)

execute_process(COMMAND git clone "https://github.com/google/googletest.git" googletest WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)

include_directories(${CMAKE_SOURCE_DIR}/lib/googletest/include)
include_directories(${CMAKE_SOURCE_DIR}/lib/googlemock/include)

add_subdirectory(${CMAKE_SOURCE_DIR}/lib/googletest [EXCLUDE_FROM_ALL])

add_executable(RunUnitTests ${TESTS_SRCS})
target_link_libraries(RunUnitTests gtest gtest_main)
target_link_libraries(RunUnitTests gmock gmock_main)
add_test(RunUnitTests RunUnitTests)