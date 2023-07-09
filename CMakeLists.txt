cmake_minimum_required(VERSION 3.12)
project(steady_cpp)

set(CMAKE_CXX_STANDARD 17)


# 遍历所有cpp文件
file(GLOB EXAM_SRC example/*.cpp)
include_directories(example/include)

# 生成可执行程序
add_executable(steady_cpp main.cpp ${EXAM_SRC})


# include导入第三方库
include_directories(thirdparty/include)

# 子模块导入第三方库
add_subdirectory(thirdparty/fmt)
target_link_libraries(steady_cpp PUBLIC fmt)

# find package导入
#find_package(OpenGL REQUIRED)
#if(OpenGl_FOUND)
#    message(STATUS "OpenGL found")
#endif()

#find_package(Eigen3 CONFIG REQUIRED)
#if(Eigen3_FOUND)
#    target_link_libraries(steady_cpp PRIVATE Eigen3::Egien)
#    message(STATUS "Eigen3 found")
#else(Eigen3_FOUND)
#    message(FATAL_ERROR "Eigen3 not found")
#endif()
