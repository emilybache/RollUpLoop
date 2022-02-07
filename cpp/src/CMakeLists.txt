set(SRC_LIB_NAME src)
add_library(${SRC_LIB_NAME} example1.h example2.h example2.cpp example3.h)
target_sources(${SRC_LIB_NAME} PRIVATE example3.cpp)
target_include_directories(${SRC_LIB_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})


