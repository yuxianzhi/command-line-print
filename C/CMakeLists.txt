cmake_minimum_required (VERSION 2.8)
project (test)
set (test_VERSION_MAJOR 1)
set (test_VERSION_MINOR 4)
set(CMAKE_C_COMPILER   gcc)  
set(CMAKE_CXX_COMPILER g++)  
set(CMAKE_C_FLAGS     "${CMAKE_C_FLAGS}   -O3 -std=c99 ")  
set(CMAKE_CXX_FLAGS   "${CMAKE_CXX_FLAGS} -O3")  


SET(LIBRARIES libm.so)
 
add_executable (test test.c print_heart.c print_chinese.c)
TARGET_LINK_LIBRARIES(test ${LIBRARIES})
