#include <stdio.h>
#include <stdlib.h>
#include "lista-dinamica.h"

int criaLista(Lista *lista)
{
  lista->inicio = NULL;
  lista->tamanho = 0;
  return SUCESSO;
}

int insereLista(Lista *lista, int valor)
{
  No *novo = malloc(sizeof(No));
  if (!novo)
    return FALHA;
  novo->elemento = valor;
  novo->proximo = NULL;

  if (lista->inicio == NULL)
  {
    lista->inicio = novo;
  }
  else
  {
    No *atual = lista->inicio;
    while (atual->proximo)
    {
      atual = atual->proximo;
    }
    atual->proximo = novo;
  }
  lista->tamanho++;
  return SUCESSO;
}

int removeNPrimeiros(Lista *lista, int valor)
{
  if (valor > lista->tamanho)
  {
    return (FALHA);
  }
  for (int i = 0; i < valor; i++)
  {
    No *temp = lista->inicio;
    lista->inicio = lista->inicio->proximo;
    free(temp);
    lista->tamanho--;
  }
  return SUCESSO;
}

int removeNUltimos(Lista *lista, int valor)
{
  if (valor > lista->tamanho)
  {
    return FALHA;
  }

  int manter = lista->tamanho - valor;

  if (manter == 0)
  {
    while (lista->inicio)
    {
      No *temp = lista->inicio;
      lista->inicio = lista->inicio->proximo;
      free(temp);
    }
    lista->tamanho = 0;
    return SUCESSO;
  }

  No *atual = lista->inicio;
  for (int i = 0; i < manter - 1; i++)
  {
    atual = atual->proximo;
  }

  No *temp = atual->proximo;
  atual->proximo = NULL;
  while (temp)
  {
    No *proximo = temp->proximo;
    free(temp);
    temp = proximo;
  }
  lista->tamanho = manter;
  return SUCESSO;
}

void imprimirLista(Lista *lista)
{
  No *atual = lista->inicio;
  while (atual)
  {
    printf("%d ", atual->elemento);
    atual = atual->proximo;
  }
  printf("\n");
}