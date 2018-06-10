#include "pilhaPointer.h"

void criarPilhaVazia(Pilha *ap){
    ap->topo = 0;
}

void *acessarTopo(Pilha *ap){
    int k;
    void *t;
    k = ap->topo - 1;
    t = ap->tabela[k].apont;
    return t;
}

bool verificarPilhaVazia(Pilha *ap){
    bool vazia;
    if (ap->topo == 0) vazia = TRUE; else vazia = FALSE;
    return vazia;
}

bool verificarPilhaCheia(Pilha *ap){
    bool cheia;
    if (ap->topo == Max) cheia = TRUE; else cheia = FALSE;
    return cheia;
}

void pushPilha(Pilha *a, void *novo){
    int k;
    k = a->topo;
    a->tabela[k].item = 0;
    a->tabela[k].apont = novo;
    a->topo = k + 1;
}

void popPilha(Pilha *a){
    int k;
    k = a->topo;
    a->topo = k-1;
}
