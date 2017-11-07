cmake_minimum_required(VERSION 2.8)
project(BuilderPattern)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(MazeSRC CountingMazeBuilder.cpp
            MazeGame.cpp
            Maze.cpp
            MazeBuilder.cpp
            Room.cpp
            StandardMazeBuilder.cpp
            Wall.cpp
            Door.cpp)

add_library(builder_pattern STATIC ${MazeSRC})

add_executable(builder1 builder1.cpp)
add_executable(builder2 builder2.cpp)

target_link_libraries(builder1 builder_pattern)
target_link_libraries(builder2 builder_pattern)