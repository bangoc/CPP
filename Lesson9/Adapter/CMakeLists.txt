cmake_minimum_required(VERSION 2.8)
project(AdapterPattern)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(adapter_SRCS
    TextView.cpp
    class_adapter/TextShape.cpp
    object_adapter/TextShape.cpp)

add_library(adapter_pattern STATIC ${adapter_SRCS})

add_executable(adapter adapter_main.cc)
target_link_libraries(adapter adapter_pattern)