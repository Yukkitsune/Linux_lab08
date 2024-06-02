cmake_minimum_required(VERSION 3.13)

project(solver)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(SOURCE_LIB solver.cpp solver.h)

add_library(solver STATIC ${CMAKE_CURRENT_SOURCE_DIR}/solver.cpp)

target_include_directories(solver PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}) 
