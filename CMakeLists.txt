cmake_minimum_required(VERSION 3.21)
project(gtest_gmock)

include_directories(./include)
set(CMAKE_CXX_STANDARD 17)
link_directories(./lib)

add_executable(gtest_gmock src/test.cpp)

target_link_libraries(gtest_gmock libgtest.a libgtest_main.a libgmock.a libgmock_main.a)