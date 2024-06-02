cmake_minimum_required(VERSION 3.13) 

project(hello_world)							 
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../formatter_ex_lib/)
add_executable(hello hello_world.cpp)	
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/../formatter_ex_lib/ formatter_ex_lib)

target_link_libraries(hello formatter_ex_lib)		 
