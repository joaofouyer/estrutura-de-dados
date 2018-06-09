cmake_minimum_required(VERSION 3.9)
project(estrutura_de_dados C)

set(CMAKE_C_STANDARD 99)

add_library(fibonacciRecursivo STATIC src/recursao/fibonacciRecursivo.c)
add_library(pote STATIC src/recursao/pote.c)
add_executable(main src/recursao/main.c)
target_link_libraries(main fibonacciRecursivo pote)