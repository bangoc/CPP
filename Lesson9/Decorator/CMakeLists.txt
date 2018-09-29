cmake_minimum_required(VERSION 2.8)
project(DecoratorPattern)

set(decorator_SRCS
    BorderDecorator.cpp
    Decorator.cpp
    ScrollDecorator.cpp
    TextView.cpp
    VisualComponent.cpp
    Window.cpp
   )

add_executable(decorator1 decorator1.cpp ${decorator_SRCS})