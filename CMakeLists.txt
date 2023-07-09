cmake_minimum_required(VERSION 3.12)
project(steady_cpp)

set(CMAKE_CXX_STANDARD 17)

# 变量所有cpp文件
file(GLOB EXAM_SRC example/*.cpp)
# include导入第三方库
include_directories(thirdparty/include example/include)

# 子模块导入第三方库
add_subdirectory(thirdparty/fmt)

add_executable(steady_cpp main.cpp ${EXAM_SRC})
target_link_libraries(steady_cpp PUBLIC fmt)
