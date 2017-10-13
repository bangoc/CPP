cmake_minimum_required(VERSION 3.1)
project(Thread)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} " -pthread")
add_executable(thread thread_local.cc)

