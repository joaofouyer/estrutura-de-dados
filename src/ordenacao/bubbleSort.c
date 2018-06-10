#include "bubbleSort.h"

Vetor BubbleSort(Vetor V){
    Vetor A;
    int nA, fim, aux;

    nA = V.tamanho - 1;
    fim = nA;

    copiarVetor(V, &A);

    for (int i = 0; i < nA; i++) {
        for (int j = 0; j < fim; j++) {
            if (A.itens[j] > A.itens[j + 1]) {
                aux = A.itens[j];
                A.itens[j] = A.itens[j + 1];
                A.itens[j + 1] = aux;
            }
            fim = fim - 1;
        }
    }
    return A;
}