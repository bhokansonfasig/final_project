cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

set(CMAKE_CXX_STANDARD 14)

find_package(Boost REQUIRED COMPONENTS filesystem)

include_directories(cpp/include)
include_directories(${Boost_INCLUDE_DIRS})

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
add_library(photon_propagator SHARED cpp/src/photon_propagator.cpp)
target_link_libraries(photon_propagator pthread ${Boost_LIBRARIES})

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
add_executable(run cpp/src/run.cpp)
target_link_libraries(run pthread ${Boost_LIBRARIES})


