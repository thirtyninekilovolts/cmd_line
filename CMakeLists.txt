cmake_minimum_required(VERSION 3.5)

project(cmd_line LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(/usr/include/readline)

add_executable(cmd_line main.cpp)

target_link_libraries(cmd_line readline)
