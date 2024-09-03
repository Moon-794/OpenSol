cmake_minimum_required(VERSION 3.0.0)
project(OpenSol)

set( CMAKE_MESSAGE_LOG_LEVEL "DEBUG")
message(DEBUG "Source Directory: ${CMAKE_SOURCE_DIR}")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY bin/)
add_executable(OpenSol ../src/main.cpp)

find_package(assimp CONFIG REQUIRED)
find_package(glfw3 CONFIG REQUIRED)
find_package(OpenGL REQUIRED)
find_package(glm CONFIG REQUIRED)

target_include_directories(OpenSol PUBLIC include/ include/Engine $ENV{VCPKG_ROOT}/installed/x64-windows/include)
target_link_libraries(OpenSol ${CMAKE_SOURCE_DIR}/lib/libUndergroundEngine.a OpenGL::GL glm::glm-header-only assimp::assimp glfw)

