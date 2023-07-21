cmake_minimum_required(VERSION 3.12)

project(mygame
  VERSION 1.0
  LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

add_subdirectory(dependencies)
add_subdirectory(src)
