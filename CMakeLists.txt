cmake_minimum_required(VERSION 3.16)
project(delta_twins)

find_package(OpenMP)

if(OpenMP_CXX_FOUND)
    set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${OpenMP_C_FLAGS}")
    set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${OpenMP_CXX_FLAGS}")
    set (CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} ${OpenMP_EXE_LINKER_FLAGS}")
    target_link_libraries(delta_twins PUBLIC OpenMP::OpenMP_CXX)
else(OpenMP_CXX_FOUND)
    message("WARNING: OpenMP NOT FOUND!")
endif(OpenMP_CXX_FOUND)

set(CMAKE_CXX_STANDARD 20)

add_executable(delta_twins src/main.cpp src/io_utils.cxx src/io_utils.hxx src/temporal_graph.cxx src/temporal_graph.hxx src/algorithm.cxx src/algorithm.hxx src/vertex.cxx src/vertex.hxx src/temporal_edge.cxx src/temporal_edge.hxx)