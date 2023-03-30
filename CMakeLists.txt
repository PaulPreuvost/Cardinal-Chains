cmake_minimum_required(VERSION 3.24)
project(projet_C)

set(CMAKE_CXX_STANDARD 17)

#raylib

find_package(raylib 4.5 QUIET) # Si vous utilisez une version différente de Raylib, modifiez le numéro de version ici

if (NOT raylib_FOUND)
    include(FetchContent)
    FetchContent_Declare(
            raylib
            URL https://github.com/raysan5/raylib/archive/master.tar.gz
    )

    FetchContent_GetProperties(raylib)
    if (NOT raylib_POPULATED)
        set(FETCHCONTENT_QUIET NO)
        FetchContent_Populate(raylib)
        set(BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
        set(BUILD_GAMES OFF CACHE BOOL "" FORCE)
        add_subdirectory(${raylib_SOURCE_DIR} ${raylib_BINARY_DIR})
    endif ()
endif ()

add_executable(projet_C main.cpp)
