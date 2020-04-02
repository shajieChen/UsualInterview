cmake_minimum_required(VERSION 3.14.0)
set(CMAKE_CXX_STANDARD 14)
project(main VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(main 算法刷题/排序练习/P1177_模板_快速排序.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
