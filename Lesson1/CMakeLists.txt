cmake_minimum_required(VERSION 3.1)
project(Lesson1)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD 11)
add_executable(undef1 inline_undefined_behavior1.cc
                      inline_undefined_behavior2.cc)
add_executable(undef2 inline_undefined_behavior2.cc
                      inline_undefined_behavior1.cc)
add_executable(static static.cc static_main.cc)
add_subdirectory(thread_local)
