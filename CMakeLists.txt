cmake_minimum_required(VERSION 3.5)
project(qouteCLI)

# Include directories for header files
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

# Define source files
set(SRCS src/main.cpp)

# Generate object files from source files
add_executable(qouteCLI ${SRCS})
