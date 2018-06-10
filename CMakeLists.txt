cmake_minimum_required(VERSION 3.9)
project(estrutura_de_dados C)

set(CMAKE_C_STANDARD 99)

add_library(fibonacciRecursivo STATIC src/recursao/fibonacciRecursivo.c src/ordenacao/selecao.h src/ordenacao/selecao.c src/fila/filaPointer.h src/fila/filaPointer.c src/fila/fila.c src/fila/fila.h src/pilha/pilhaPointer.c src/pilha/pilhaPointer.h src/pilha/pilha.c src/pilha/pilha.h src/booleano.h src/lista/listaPointer.c src/lista/listaPointer.h src/lista/lista.c src/lista/lista.h)
add_library(pote STATIC src/recursao/pote.c src/fila/filaPointer.h)
add_executable(main src/recursao/main.c src/fila/filaPointer.h)
target_link_libraries(main fibonacciRecursivo pote)
add_executable(lista src/lista/lista.c)