cmake_minimum_required(VERSION 3.10)

# Project name
project(Engine)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Find SFML
find_package(SFML 2.5.1 COMPONENTS graphics window system REQUIRED)

# Add sources files
set(SOURCES
  src/main.cpp
  src/engine.cpp
)

# Add include directories
include_directories(src)

# Create the executabl
add_executable(${PROJECT_NAME} ${SOURCES})

# Link SFML libraries to the executable
target_link_libraries(${PROJECT_NAME} sfml-graphics sfml-window sfml-system)