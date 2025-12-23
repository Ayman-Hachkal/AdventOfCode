cmake_minimum_required(VERSION 3.23)

project(AdventOfCode LANGUAGES CXX)

add_executable(${PROJECT_NAME} main.cpp)

set(RESOURCES_DIR "${CMAKE_CURRENT_SOURCE_DIR}/resources")
# Define the target location relative to the executable's output directory
set(RUNTIME_RESOURCES_DIR "${CMAKE_CURRENT_BINARY_DIR}/resources")

# Copy the resource files to the build directory
file(COPY "${RESOURCES_DIR}" DESTINATION "${CMAKE_CURRENT_BINARY_DIR}")

message("root dir CMAKE_SOURCE_DIR = ${CMAKE_SOURCE_DIR}")

