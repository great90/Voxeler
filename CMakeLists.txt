cmake_minimum_required(VERSION 3.16 FATAL_ERROR)
project(Voxeler)

find_package(OpenGL REQUIRED)

include_directories(thirdparty/glad/include)
include_directories(thirdparty/glfw/include)
include_directories(thirdparty/glm/include)

add_subdirectory(thirdparty/glad)
add_subdirectory(thirdparty/glfw)
add_subdirectory(thirdparty/glm)

file(GLOB_RECURSE Runtime "Engine/**.cpp" "Engine/**.h" "Engine/**.hpp")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/Build/bin")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/Build/bin")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED true)

add_executable(Voxeler ${Runtime})