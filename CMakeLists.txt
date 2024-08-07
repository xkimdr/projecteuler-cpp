cmake_minimum_required(VERSION 3.30)
project(projecteuler-cpp CXX) 

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

file(GLOB PROB_SOURCES src/prob/*.cpp)
add_executable(projecteuler-cpp src/pe.cpp ${PROB_SOURCES})
target_include_directories(projecteuler-cpp PRIVATE include)
target_compile_options(projecteuler-cpp PRIVATE -Werror -Wall -Wextra -Wconversion -Wsign-conversion -pedantic-errors)

enable_testing()
find_package(GTest REQUIRED)
include(GoogleTest)
include(CTest)

add_executable(projecteuler-cpp-test test/prob_test.cpp ${PROB_SOURCES})
target_include_directories(projecteuler-cpp-test PRIVATE include)
target_link_libraries(projecteuler-cpp-test GTest::gmock GTest::gmock_main)
target_compile_options(projecteuler-cpp-test PRIVATE -Werror -Wall -Wextra -Wconversion -Wsign-conversion -pedantic-errors)
gtest_discover_tests(projecteuler-cpp-test)