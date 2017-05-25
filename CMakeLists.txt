cmake_minimum_required(VERSION 3.6)
project(untitled1)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Graph.h Graph.cpp Euler.h)
add_executable(untitled1 ${SOURCE_FILES})