cmake_minimum_required(VERSION 3.14.0)
set(CMAKE_CXX_STANDARD 14)
project(main VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(main 数据结构刷题/线性表/P1449_后缀表达式.cpp) 

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
