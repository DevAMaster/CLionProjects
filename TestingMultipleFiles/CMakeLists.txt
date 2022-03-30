cmake_minimum_required(VERSION 3.21)
project(TestingMultipleFiles)

set(CMAKE_CXX_STANDARD 14)

add_executable(TestingMultipleFiles main.cpp sum.cpp)
