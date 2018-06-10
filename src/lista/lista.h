#ifndef ESTRUTURA_DE_DADOS_LISTA_H
#define ESTRUTURA_DE_DADOS_LISTA_H
#define MAX 32
#include "../booleano.h"

typedef struct Vetor{
     int tamanho;                           // Outra alternativa seria armazenar o tamanho do vetor no índice 0.
     int itens[MAX];
} Vetor;

Vetor* criarVetorVazio();

bool verificarVetorVazio(Vetor*);

void imprimirVetor(Vetor *);

void inserirNoVetor(Vetor *, int);          // Insere no final do vetor.

void inserirNoInicioDoVetor(Vetor *, int);  // Insere no início do vetor.

void removerDoVetor(Vetor *, int);          // Remove na posição indicada.

void removerItemDoVetor(Vetor *, int);      // Busca e remove item do vetor caso ele pertença.

#endif
