#include <stdlib.h>
#include <stdio.h>
#include "lista.h"

Vetor criarVetorVazio(){
    Vetor V;
    V.tamanho = 0;
    return V;
}

bool verificarVetorVazio(Vetor V){
    bool vazio;
    if (V.tamanho == 0)
        vazio = TRUE;
    else
        vazio = FALSE;
    return vazio;
}

void inserirNoVetor(Vetor *V, int item){
    V->itens[V->tamanho] = item;
    V->tamanho = V->tamanho + 1;
}

void inserirNoInicioDoVetor(Vetor *V, int item){
    Vetor *Aux;
    int i;
    Aux = malloc(sizeof(Vetor));
    Aux->tamanho = V->tamanho;
    for (i = 0; i < V->tamanho; i++) {
        Aux->itens[i] = V->itens[i];
    }

    V->tamanho = V->tamanho+1;
    V->itens[0] = item;
    for (i = 0; i < (Aux->tamanho); i++){
        V->itens[i+1] = Aux->itens[i];
    }
}

Vetor buscarItemNoVetor(Vetor V, int item){
    Vetor Itens = criarVetorVazio();
    int i;
    if (V.tamanho){
        for (i = 0; i < V.tamanho; i++){
            if (V.itens[i] == item)
                inserirNoVetor(&Itens, i);
        }
    }
    return Itens;
}

void removerDoVetor(Vetor *V, int indice){
    int i;
    if (indice < V->tamanho){
        for (i = indice; i < (V->tamanho -1); i++){
            V->itens[i] = V->itens[i+1];
        }
        V->tamanho = V->tamanho-1;
    }
}

void removerItemDoVetor(Vetor *V, int item){
    int i, j;
    if (V->tamanho){
        for (i = (V->tamanho-1); i >= 0; i--){
            if (V->itens[i] == item){
                for (j = i; j < (V->tamanho -1); j++){
                    V->itens[j] = V->itens[j+1];
                }
                V->tamanho = V->tamanho -1;
            }
        }
    }
}

void imprimirVetor(Vetor V){
    if (V.tamanho > 0){
        int i;
        printf("\nnA = %d. [", V.tamanho);
        for (i = 0; i < (V.tamanho-1); i++){
            printf("%d, ", V.itens[i]);
        }
        printf("%d]\n", V.itens[i]);
    }
    else {
        printf("\nnA = %d. []", V.tamanho);
    }
}

void copiarVetor(Vetor V, Vetor *A){
    int i;
    A->tamanho = 0;
    for (i = 0; i < V.tamanho; i++){
        A->itens[i] = V.itens[i];
    }
    A->tamanho = i;
}