#include <stdio.h>
#include "lista-encadeada.h"

No *criaNo(int valor)
{
  No *novo = (No *)malloc(sizeof(No));
  if (!novo)
    return NULL;
  novo->valor = valor;
  novo->anterior = NULL;
  novo->proximo = NULL;
  return novo;
}

void insereFinal(No **inicio, int valor)
{
  No *novo = criaNo(valor);
  if (*inicio == NULL)
  {
    *inicio = novo;
  }
  else
  {
    No *atual = *inicio;
    while (atual->proximo != NULL)
    {
      atual = atual->proximo;
    }
    atual->proximo = novo;
    novo->anterior = atual;
  }
}

void mostraAntecessorESucessor(No *inicio, int valor)
{
  No *atual = inicio;
  while (atual != NULL)
  {
    if (atual->valor == valor)
    {
      if (atual->anterior != NULL)
        printf("Antecessor de %d: %d\n", valor, atual->anterior->valor);
      else
        printf("%d nao possui antecessor (inicio da lista)\n", valor);

      if (atual->proximo != NULL)
        printf("Sucessor de %d: %d\n", valor, atual->proximo->valor);
      else
        printf("%d nao possui sucessor (fim da lista)\n", valor);
      return;
    }
    atual = atual->proximo;
  }
  printf("Elemento %d nao encontrado na lista.\n", valor);
}