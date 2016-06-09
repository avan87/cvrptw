cmake_minimum_required(VERSION 3.5)
project(cvrptw)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp  matr.cpp utils.cpp utils.h cvrp_types.cpp cvrp_constants.cpp cvrp_solver_server.cpp CVRPSolver.cpp)




include_directories(/home/veter/c_plus_plus_ortools/or-tools.Linux64/include)
include_directories(/home/veter/c_plus_plus_ortools/or-tools.Linux64/gen-cpp)
include_directories(/usr/local/include)

link_directories(/usr/local/lib)
link_directories(/home/veter/c_plus_plus_ortools/or-tools.Linux64/lib)


add_executable(cvrptw ${SOURCE_FILES})

target_link_libraries (cvrptw ortools thrift thriftnb event)