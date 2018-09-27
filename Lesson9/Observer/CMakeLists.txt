cmake_minimum_required(VERSION 2.8)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD 11)

set(observer_SRCS
    ClockTimer.cpp
    AnalogClock.cpp
    DigitalClock.cpp
    MyClock.cpp
    Subject.cpp)

add_executable(observer observer_main.cpp ${observer_SRCS})
