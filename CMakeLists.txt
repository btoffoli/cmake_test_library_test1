cmake_minimum_required(VERSION 3.1.15)
project (animals)

include_directories(include)

file(GLOB SOURCES "src/*.cpp")

add_executable(animals ${SOURCES})