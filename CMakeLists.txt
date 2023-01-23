cmake_minimum_required(VERSION 3.24)
project(bloom_filter)

set(CMAKE_CXX_STANDARD 23)

add_library(bloom_filter src/bloom_filter.cpp src/hasher.cpp)

add_executable(unit_tests test/hasher.cpp)

target_link_libraries(unit_tests bloom_filter)