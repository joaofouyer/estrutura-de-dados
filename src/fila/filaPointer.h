#ifndef ESTRUTURA_DE_DADOS_FILAPOINTER_H
#define ESTRUTURA_DE_DADOS_FILAPOINTER_H

#include "../booleano.h"

typedef struct Celula{
    void * item;            /* item é um pointer */
    struct Celula *next;    /* o campo next guarda o endereço do elemento seguinte da fila */
} Celula;

typedef struct{
    Celula *inicio;         /* inicio tem o endereço do primeiro da fila */
    Celula *fim;            /* fim guarda o endereço do ultimo da fila */
} Fila;


void criarFilaVazia(Fila *);    /* o construtor cria a fila vazia */

void *acessarFila(Fila *);      /* devolve o primeiro da fila */

bool verificarFilaVazia(Fila *); /* devolve 1 se a fila estiver vazia */

void pushFila(Fila *, void *);  /* coloca o valor dado no fim da fila */

void popFila(Fila *);           /* retira o primeiro da fila */

#endif
