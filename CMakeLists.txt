cmake_minimum_required(VERSION 3.21)

project(LeetCode_75 VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_STANDARD 17)

find_package(GTest QUIET)

option(BUILD_TEST "Building Tests" ON)

add_executable(LeetCode_75)

target_sources(LeetCode_75 
    PRIVATE 
        src/main.cpp)

        






