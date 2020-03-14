cmake_minimum_required(VERSION 3.15)
project(gracenote-format)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")

add_executable("${PROJECT_NAME}" main.cpp utils.cpp utils.hpp)

#target_link_libraries("${PROJECT_NAME}" libboost-system-dev)
