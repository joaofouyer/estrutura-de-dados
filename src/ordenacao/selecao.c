#include "selecao.h"

Vetor SelectionSort(Vetor V){
    Vetor A;
    int nA, fim, maior, aux;

    copiarVetor(V, &A);
    nA = A.tamanho -1;
    fim = nA;

    for (int j = 0; j < (nA); j++){
        maior = 0;
        for (int k = 1; k <= fim; k++){
            if (A.itens[k] > A.itens[maior])
                maior = k;
        }
        if (maior != fim){
            aux = A.itens[fim];
            A.itens[fim] = A.itens[maior];
            A.itens[maior] = aux;
        }

        fim = fim-1;
    }

    return A;
}
