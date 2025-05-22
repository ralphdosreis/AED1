#include <stdio.h>
#include <stdlib.h>
#include "lista-numeros.h"

int criaListaVazia(Lista *lista)
{
  if (lista != NULL)
  {
    lista->tamanho = 0;
    return (SUCESSO);
  }
  return (FALHA);
}

int inicializaLista(Lista *lista, Numero numero)
{
  if (lista != NULL)
  {
    lista->numeros[0] = numero;
    lista->tamanho = 1;
    return (SUCESSO);
  }
  return (FALHA);
}

int tamanhoLista(Lista *lista)
{
  if (lista->tamanho >= 0)
  {
    return lista->tamanho;
  }
  else
  {
    return (FALHA);
  }
}

int listaVazia(Lista *lista)
{
  if (lista->tamanho == 0)
  {
    return (SUCESSO);
  }
  return 0;
}

int listaCheia(Lista *lista)
{
  if (lista->tamanho == TAMANHO_MAXIMO_LISTA)
  {
    return (SUCESSO);
  }
  return 0;
}

int insereInicio(Lista *lista, Numero numero)
{
  if (lista->tamanho == TAMANHO_MAXIMO_LISTA)
  {
    return (FALHA);
  }
  else
  {
    for (int i = lista->tamanho; i > 0; i--)
    {
      lista->numeros[i] = lista->numeros[i - 1];
    }
    lista->numeros[0] = numero;
    lista->tamanho++;
    return (SUCESSO);
  }
}

int insereMeio(Lista *lista, int posicao, Numero elemento)
{
  if (listaCheia(lista))
  {
    return (FALHA);
  }
  if (posicao < 0 || posicao > lista->tamanho)
  {
    printf("Posicao invalida!\n");
    return (FALHA);
  }

  for (int i = (lista->tamanho - 1); i >= posicao; i--)
  {
    lista->numeros[i + 1] = lista->numeros[i];
  }
  lista->numeros[posicao] = elemento;
  lista->tamanho++;
  printf("Elemento inserido na posicao %d!\n", posicao);
  return (SUCESSO);
}

int insereFinal(Lista *lista, Numero numero)
{
  int i;
  if (lista->tamanho == TAMANHO_MAXIMO_LISTA)
  {
    return (FALHA);
  }
  else
  {
    lista->numeros[lista->tamanho] = numero;
    lista->tamanho++;
    return (SUCESSO);
  }
}

int removeInicio(Lista *lista)
{
  if (lista == NULL)
  {
    return (FALHA);
  }
  if (listaVazia(lista))
  {
    return (FALHA);
  }
  int i;
  for (i = 0; i < (lista->tamanho - 1); i++)
  {
    lista->numeros[i] = lista->numeros[i + 1];
  }
  lista->tamanho--;
  return (SUCESSO);
}

int removeMeio(Lista *lista, int posicao)
{
  if (lista == NULL)
  {
    return (FALHA);
  }
  if (listaVazia(lista))
  {
    return (FALHA);
  }
  int i = 0;
  for(int i=posicao;i<lista->tamanho-1;i++) {
    lista->numeros[i] = lista->numeros[i+1];
  }
  lista->tamanho--;
  return (SUCESSO);
}

int removeFinal(Lista *lista)
{
  if (lista == NULL)
  {
    return (FALHA);
  }
  if (listaVazia(lista))
  {
    return (FALHA);
  }
  lista->tamanho--;
  return (SUCESSO);
}

int consultaListaValor(Lista *lista, int valor, Numero *numero)
{
  if (lista == NULL)
  {
    return (FALHA);
  }
  int i = 0;
  while (i < lista->tamanho && lista->numeros[i].valor != valor)
  {
    i++;
  }
  if (i == lista->tamanho)
  {
    return 0;
  }
  *numero = lista->numeros[i];
  return (SUCESSO);
}

int consultaListaIndice(Lista *lista, int indice, Numero *numero)
{
  if (lista == NULL || indice < 0 || indice >= lista->tamanho)
  {
    return (FALHA);
  }
  *numero = lista->numeros[indice - 1];
  return (SUCESSO);
}

void imprimeLista(Lista *lista)
{
  int i;
  for (i = 0; i < (lista->tamanho); i++)
  {
    printf("%d ", lista->numeros[i].valor);
  }
}