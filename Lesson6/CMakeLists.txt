cmake_minimum_required(VERSION 2.8)
project(Lesson6)
add_executable(lambda1 S01_lambda_usage.cc)
target_link_libraries(lambda1 hiredis redox ev)
