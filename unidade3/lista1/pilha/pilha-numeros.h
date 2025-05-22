#ifndef PILHA_NUMEROS_H
#define PILHA_NUMEROS_H

#include <stdio.h>
#include <stdlib.h>

#define SUCESSO 1
#define FALHA -1
#define CHAVE_INVALIDA 0

#define TAMANHO_MAXIMO 100

typedef struct pilha
{
  int dados[TAMANHO_MAXIMO];
  int topo;
} Pilha;

int criaPilha(Pilha *pilha);
void inicializaPilha(Pilha *pilha);
// void liberaPilha(Pilha *pilha);
int tamanhoPilha(Pilha *pilha);
int pilhaVazia(Pilha *pilha);
int pilhaCheia(Pilha *pilha);
int push(Pilha *pilha, int numero);
int pop(Pilha *pilha, int *valor);
int consultaTopo(Pilha *pilha, int *valor);
int inmprimePilha(Pilha *pilha);

#endif