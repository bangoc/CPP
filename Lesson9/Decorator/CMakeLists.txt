cmake_minimum_required(VERSION 2.8)
project(DecoratorPattern)

set(decorator_SRCS
    BorderDecorator.cpp
    Decorator.cpp
    ScrollDecorator.cpp
    VisualComponent.cpp
    Window.cpp)

add_library(decorator STATIC ${decorator_SRCS})

add_executable(decorator1 decorator1.cpp)

target_link_libraries(decorator1 decorator)
