#ifndef LISTA_DINAMICA_H
#define LISTA_DINAMICA_H

#define FALHA -1
#define SUCESSO 1;

#include <stdio.h>
#include <stdlib.h>

typedef struct No
{
  int elemento;
  struct No *proximo;
} No;

typedef struct
{
  No *inicio;
  int tamanho;
} Lista;


int criaLista(Lista *lista);
int insereLista(Lista *lista, int valor);
int removeNPrimeiros(Lista *lista, int valor);
int removeNUltimos(Lista *lista, int valor);
void imprimirLista(Lista *lista);

#endif