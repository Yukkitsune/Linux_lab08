cmake_minimum_required(VERSION 3.13) 
project(solver_lib)				

set(SOURCE_LIB solver.cpp solver.h)		

add_library(solver_lib STATIC ${SOURCE_LIB})
