cmake_minimum_required(VERSION 3.16)
project(roll_up_loop)

set(CMAKE_CXX_STANDARD 11)

# uncomment these lines to enable coverage measurements using gcov
#set(CMAKE_C_FLAGS "--coverage")
#set(CMAKE_CXX_FLAGS "--coverage")

enable_testing()
add_subdirectory(src)
add_subdirectory(lib)
add_subdirectory(test)
