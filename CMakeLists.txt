cmake_minimum_required(VERSION 3.12)
project(steady_cpp)

set(CMAKE_CXX_STANDARD 17)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/thirdparty/include ${CMAKE_CURRENT_SOURCE_DIR}/example/include)

add_executable(steady_cpp main.cpp example/glm_vec3.cpp)
