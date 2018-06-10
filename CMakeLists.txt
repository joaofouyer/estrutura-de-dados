cmake_minimum_required(VERSION 3.9)
project(estrutura_de_dados C)

set(CMAKE_C_STANDARD 99)

add_library(lista STATIC src/lista/lista.c)
add_library(fila STATIC src/fila/fila.c)
add_library(pilha STATIC src/pilha/pilha.c)
add_library(listaPointer STATIC src/lista/listaPointer.c)
add_library(filaPointer STATIC src/fila/filaPointer.c)
add_library(pilhaPointer STATIC src/pilha/pilhaPointer.c)

add_library(selecao STATIC src/ordenacao/selecao.c)
add_library(bubbleSort src/ordenacao/bubbleSort.c)
