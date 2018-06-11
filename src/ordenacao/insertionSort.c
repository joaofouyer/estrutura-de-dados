#include <stdio.h>
#include "insertionSort.h"

Vetor InsertionSort(Vetor V){
    Vetor A;
    int aux, j;
    copiarVetor(V, &A);

    for (int i = 1; i <= (A.tamanho-1); i++){
        aux = A.itens[i];
        j = i - 1;
        while (A.itens[j] > aux && j >= 0){
            A.itens[j+1] = A.itens[j];
            j = j-1;
        }
        A.itens[j+1] = aux;
    }
    return A;
}
void InsertionSort2(Vetor *A){
    int aux, j;

    for (int i = 1; i <= (A->tamanho-1); i++){
        aux = A->itens[i];
        j = i - 1;
        while (A->itens[j] > aux && j >= 0){
            A->itens[j+1] = A->itens[j];
            j = j-1;
            A->itens[j+1] = aux;
        }
    }
}