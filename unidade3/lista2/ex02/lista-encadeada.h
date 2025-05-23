#ifndef LISTA_ENCADEADA_H
#define LISTA_ENCADEADA_H

#include <stdio.h>
#include <stdlib.h>

typedef struct No
{
  int valor;
  struct No *anterior;
  struct No *proximo;
} No;

void insereFinal(No **inicio, int valor);
void mostraAntecessorESucessor(No *inicio, int valor);

#endif