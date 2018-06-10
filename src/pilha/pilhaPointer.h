#ifndef ESTRUTURA_DE_DADOS_PILHAPOINTER_H
#define ESTRUTURA_DE_DADOS_PILHAPOINTER_H
#include "../booleano.h"
#define Max 20

typedef struct {
    void * apont;
    int item;
}Casa;

typedef struct {
    int topo;
    Casa tabela[Max];
} Pilha;

void criarPilhaVazia(Pilha *);

void *acessarTopo(Pilha *);

bool verificarPilhaVazia(Pilha *);

bool verificarPilhaCheia(Pilha *);

void pushPilha(Pilha *, void *);

void popPilha(Pilha *);

#endif
