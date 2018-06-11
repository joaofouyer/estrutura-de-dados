#include <stdio.h>
#include "insertionSort.h"

int main(){
    Vetor V = criarVetorVazio();
    Vetor A;
    inserirNoVetor(&V, 42);
    inserirNoVetor(&V, 31);
    inserirNoVetor(&V, 30);
    inserirNoVetor(&V, 42);
    inserirNoVetor(&V, 51);
    inserirNoVetor(&V, 1);
    InsertionSort2(&V);
    imprimirVetor(V);
    return 0;
}

Vetor InsertionSort(Vetor V){
    Vetor A;
    int nA, aux, j;
    copiarVetor(V, &A);
    nA = A.tamanho - 1;

    for (int i = 1; i <= nA; i++){
        aux = A.itens[i];
        j = i - 1;
        while (A.itens[j] > aux && j < nA){
            A.itens[j+1] = A.itens[j];
            j = j+1;
        }
        A.itens[j+1] = aux;
    }
    return A;
}
void InsertionSort2(Vetor *A){
    int nA, aux, j;

    nA = A->tamanho - 1;

    for (int i = 1; i <= nA; i++){
        aux = A->itens[i];
        j = i - 1;
        while (A->itens[j] > aux){
            A->itens[j+1] = A->itens[j];
            j = j+1;
        }
        A->itens[j+1] = aux;
    }
}