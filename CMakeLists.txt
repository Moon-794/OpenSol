cmake_minimum_required(VERSION 3.0.0)
project(OpenSol)

set( CMAKE_MESSAGE_LOG_LEVEL "DEBUG")
message(DEBUG "Source Directory: ${CMAKE_SOURCE_DIR}")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY bin/)
add_executable(OpenSol ../src/main.cpp)

target_include_directories(OpenSol PUBLIC include/)
target_link_libraries(OpenSol ${CMAKE_SOURCE_DIR}/lib/libCore.a ${CMAKE_SOURCE_DIR}/lib/libglfw3dll.a ${CMAKE_SOURCE_DIR}/lib/libGameTime.a ${CMAKE_SOURCE_DIR}/lib/libAssetImporter.a ${CMAKE_SOURCE_DIR}/lib/libECS.a)

