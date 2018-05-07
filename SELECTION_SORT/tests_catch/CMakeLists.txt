file(GLOB TESTS_SRCS *.cpp)
file(MAKE_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)
file(WRITE ${CMAKE_SOURCE_DIR}/lib/catch/CMakeLists.txt "")

file(DOWNLOAD https://github.com/catchorg/Catch2/releases/download/v2.2.2/catch.hpp ${CMAKE_SOURCE_DIR}/lib/catch/catch.hpp)

include_directories(${CMAKE_SOURCE_DIR}/lib/catch)

add_subdirectory(${CMAKE_SOURCE_DIR}/lib/catch [EXCLUDE_FROM_ALL])
add_executable(RunUnitTests ${TESTS_SRCS})
add_test(RunUnitTests RunUnitTests)