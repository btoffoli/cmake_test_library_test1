cmake_minimum_required(VERSION 3.1.15)
project (animals)

include_directories(include)

file(GLOB SOURCES "src/*.cpp")

add_library(testAnimals SHARED ${SOURCES})

# add_executable(animals ${SOURCES})
install(TARGETS testAnimals DESTINATION $ENV{HOME})