cmake_minimum_required(VERSION 2.8)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD 11)

set(observer_SRCS
    ClockTimer.cpp
    AnalogClock.cpp
    DigitalClock.cpp
    Subject.cpp)

add_library(observer_pattern STATIC ${observer_SRCS})

add_executable(observer observer_main.cpp)
target_link_libraries(observer observer_pattern)
