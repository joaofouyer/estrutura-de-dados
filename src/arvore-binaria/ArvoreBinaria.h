#ifndef ESTRUTURA_DE_DADOS_ARVOREBINARIA_H
#define ESTRUTURA_DE_DADOS_ARVOREBINARIA_H
#include "../booleano.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct No {
    int elemento;
    struct No* esq;
    struct No* dir;
} No;

typedef No* Arvore;

bool verificarArvoreVazia(Arvore);

Arvore construirArvore(int, Arvore, Arvore);

int verificarAlturaArvore(Arvore);

void inserirNo(int elemento, Arvore);

void mostrarNo(No);

void mostrarArvoreERD(Arvore);

void mostrarArvoreRED(Arvore);

void mostrarArvoreEDR(Arvore);

void mostrarArvoreBFS(Arvore);

bool verificarArvoreVazia(Arvore A){
    bool vazia;

    if(A == NULL) vazia = TRUE;
    else vazia = FALSE;

    return vazia;
}

void mostrarNo(No A){
    printf("%d", A.elemento);
}

void mostrarArvoreERD(Arvore A){
    if (A != NULL){
        mostrarArvoreERD(A->esq);
        mostrarNo(A);
        mostrarArvoreERD(A->dir);
    }
}

void mostrarArvoreERD(Arvore A){
    if (A != NULL){
        mostrarArvoreERD(A->esq);
        printf("%d", A->elemento);
        mostrarArvoreERD(A->dir);
    }
}

Arvore construirArvore(int item, Arvore E, Arvore D){
    No *novo, *raiz;
    novo = (struct No*)malloc(sizeof(struct No));
    novo->elemento = item;
    novo->esq = E;
    novo->dir = D;
    raiz = novo;
    return raiz;
}
#endif