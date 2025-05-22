#ifndef LISTA_ESTATICA_H
#define LISTA_ESTATIVA_H

#include <stdio.h>

#define TAMANHO_MAXIMO 100
#define SUCESSO 1
#define FALHA 1

typedef struct
{
  int elementos[TAMANHO_MAXIMO];
  int tamanho;
} Lista;

int criaLista(Lista *lista);
int inserirLista(Lista *lista, int valor);
int removeNPrimeiros(Lista *lista, int valor);
int removeNUltimos(Lista *lista, int valor);
void imprimirLista(Lista *lista);

#endif