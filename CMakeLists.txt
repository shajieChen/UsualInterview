cmake_minimum_required(VERSION 3.14.0)
set(CMAKE_CXX_STANDARD 14)
project(main VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(main 搜索/P1219_[USACO1.5]八皇后_Checker_Challenge.cpp) 

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
