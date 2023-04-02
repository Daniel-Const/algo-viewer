cmake_minimum_required(VERSION 3.7)
set(PROJECT_NAME algo-viewer)
project (${PROJECT_NAME})

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

add_executable(algo-viewer
    # source
    src/main.cpp
    src/algorithm.cpp
    src/application.cpp
    src/binary_search.cpp
    src/array.cpp
    # src/data_structure.cpp

    # headers
    include/algorithm.h
    include/application.h
    include/data_structure.h
    include/binary_search.h
    include/array.h
)

target_link_libraries(${PROJECT_NAME} ${SDL2_LIBRARIES})