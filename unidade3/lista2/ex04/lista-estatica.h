#ifndef LISTA_ESTATICA_H
#define LISTA_ESTATICA_H

#include <stdio.h>

#define TAMANHO_MAXIMO 100
#define SUCESSO 1
#define FALHA -1

typedef struct
{
  int elementos[TAMANHO_MAXIMO];
  int tamanho;
} Lista;

int criaLista(Lista *lista);
int insereLista(Lista *lista, int valor);
int quantidadePar(Lista *lista);
int mediaLista(Lista *lista);
int maiorLista(Lista *lista);
int menorLista(Lista *lista);
int posicaoMaiorLista(Lista *lista);
int posicaoMenorLista(Lista *lista);
int somaLista(Lista *lista);
int quantidadePrimosLista(Lista *lista);
void imprimeLista(Lista *lista);

#endif