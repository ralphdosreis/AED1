#include <stdio.h>
#include "lista-estatica.h"

int criaLista(Lista *lista)
{
  if (lista == NULL)
  {
    return (FALHA);
  }
  lista->tamanho = 0;
  return (SUCESSO);
}

int inserirLista(Lista *lista, int valor)
{
  if (lista->tamanho >= TAMANHO_MAXIMO)
  {
    return (FALHA);
  }
  lista->elementos[lista->tamanho++] = valor;
  return (SUCESSO);
}

int removeNPrimeiros(Lista *lista, int valor)
{
  if (lista->tamanho < valor)
  {
    return (FALHA);
  }

  for (int i = 0; i < (lista->tamanho - valor); i++)
  {
    lista->elementos[i] = lista->elementos[i + valor];
  }
  lista->tamanho -= valor;
  return (SUCESSO);
}

int removeNUltimos(Lista *lista, int valor)
{
  if (lista->tamanho < valor)
  {
    return (FALHA);
  }

  lista->tamanho -= valor;
  return (SUCESSO);
}

void imprimirLista(Lista *lista)
{
  for (int i = 0; i < lista->tamanho; i++)
  {
    printf("%d ", lista->elementos[i]);
  }
  printf("\n");
}