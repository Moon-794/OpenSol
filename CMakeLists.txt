cmake_minimum_required(VERSION 3.0.0)
project(OpenSol)

set( CMAKE_MESSAGE_LOG_LEVEL "DEBUG")
message(DEBUG "Source Directory: ${CMAKE_SOURCE_DIR}")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY bin/)
add_executable(OpenSol ../src/main.cpp)

target_include_directories(OpenSol PUBLIC include/)
target_link_libraries(OpenSol ${CMAKE_SRC_DIR}/lib/libUndergroundEngine.a)

