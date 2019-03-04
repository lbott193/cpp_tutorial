cmake_minimum_required (VERSION 3.8)
project (Tutorial)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# set up output paths for executable binaries
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)

add_executable(tutorial
        common_types.h
        main.cpp
        replace_player.cpp
        replace_player.h        
        glibber.cpp
        glibber.h
        )

