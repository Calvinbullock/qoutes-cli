cmake_minimum_required(VERSION 3.5)
project(qouteCLI)

# Include directories for header files
include_directories(src)
include_directories(test)

# Define source file
set(SOURCE_FILES src/main.cpp)

# Generate executable
add_executable(qouteCLI ${SOURCE_FILES})
