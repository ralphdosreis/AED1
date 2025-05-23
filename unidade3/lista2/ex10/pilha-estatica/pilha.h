#ifndef PILHA_H
#define PILHA_H

#include <stdio.h>

#define MAX 100

typedef struct {
    int dados[MAX];
    int topo;
} PilhaEstatica;

void inicializaPilha(PilhaEstatica *p);
int vazia(PilhaEstatica *p);
int cheia(PilhaEstatica *p);
int push(PilhaEstatica *p, int valor);
int pop(PilhaEstatica *p, int *valor);
void mostraImpares(PilhaEstatica *p);

#endif