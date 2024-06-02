cmake_minimum_required(VERSION 3.13)

project(equation)

include_directories("../formatter_ex_lib/")
include_directories("../solver_lib/")

add_executable(equation equation.cpp)

add_subdirectory("../formatter_ex_lib/" formatter_ex)
add_subdirectory("../solver_lib/" solver)

target_link_libraries(equation formatter_ex)
target_link_libraries(equation solver)

add_library(formatter_ex_lib STATIC "../formatter_ex_lib/formatter_ex.h")
add_library(solver_lib STATIC "../solver_lib/solver.h")
add_executable(solver_app equation.cpp) 
target_include_directories(equation PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(equation solver_lib formatter_ex_lib formatter_lib)
