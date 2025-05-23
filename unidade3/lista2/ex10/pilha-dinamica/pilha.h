#ifndef PILHA_H
#define PILHA_H

#include <stdio.h>

typedef struct No
{
  int valor;
  struct No *prox;
} No;

typedef struct
{
  No *topo;
} PilhaDinamica;

void inicializaPilha(PilhaDinamica *p);
int vazia(PilhaDinamica *p);
void push(PilhaDinamica *p, int valor);
int pop(PilhaDinamica *p, int *valor);
void mostraImpares(PilhaDinamica *p);

#endif