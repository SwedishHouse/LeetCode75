cmake_minimum_required(VERSION 3.21)

project(LeetCode_75 VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_TANDARD 17)
set(CMAKE_C_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)


# --- Подключение Google Test ---
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.15.2.zip
  # Можно указать конкретный коммит/тег для воспроизводимости
)
# Для Windows: предотвращает переопределение настроек компилятора/рантайма
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

option(BUILD_TEST "Building Tests" ON)

add_library(solutionlib 
    src/solution.cpp
    src/array_and_string.cpp
    src/bit_manipulation.cpp
)

target_include_directories(solutionlib 
    PUBLIC
        inc
)

enable_testing()

add_executable(LeetCode_75
    tests/test.cpp
    tests/test_array_and_string.cpp)

target_include_directories(LeetCode_75 
    PUBLIC
        inc
)

target_link_libraries(LeetCode_75
    PRIVATE
        solutionlib
        GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(LeetCode_75)

        






