cmake_minimum_required(VERSION 3.13)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(solve_equasion)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/formatter_ex_lib formatter_ex_new_name)

target_include_directories(formatter_ex PUBLIC formatter_ex_lib formatter_lib hello_world_application solver_lib)

add_library(solver ${CMAKE_CURRENT_SOURCE_DIR}/solver_lib/solver.cpp)

add_executable(solver ${CMAKE_CURRENT_SOURCE_DIR}/solver_application/equation.cpp)

target_link_libraries(solver formatter formatter_ex solver)

install(TARGETS solver
RUNTIME DESTINATION bin
)

include(CPackConfig.cmake)
