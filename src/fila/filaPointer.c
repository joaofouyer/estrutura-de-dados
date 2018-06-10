#include "filaPointer.h"
#include <stdio.h>
#include <stdlib.h>

void criarFilaVazia(Fila *fi){
    fi->inicio = NULL;
    fi->fim = NULL;
}

void *acessarFila(Fila *fi){
    Celula *aux;
    void * valor;
    aux = fi->inicio;
    if (aux == NULL) valor = NULL;
    else valor = aux->item;
    return valor;
}

bool verificarFilaVazia(Fila *fi){
    bool vazia;
    Celula *aux;
    aux = fi->inicio;
    if (aux == NULL) vazia = TRUE;
    else vazia = FALSE;
    return vazia;
}

void pushFila(Fila *fi, void *ap){
    Celula *p;
    Celula *aux;
    p = (Celula *)malloc(sizeof(Celula));
    p->item = ap; p->next = NULL;
    if (fi->inicio == NULL) fi->inicio = p;
    else {aux = fi->fim;  aux->next = p;}
    fi->fim = p;
}

void popFila(Fila *fi){
    Celula *seg;
    Celula *pri;
    pri = fi->inicio;
    if (fi->inicio != NULL){
        if (fi->inicio == fi->fim) {fi->inicio = NULL; fi->fim = NULL;}
        else {seg = pri->next; fi->inicio = seg;}
    }
}