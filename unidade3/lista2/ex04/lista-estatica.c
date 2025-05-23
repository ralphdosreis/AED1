#include <stdio.h>
#include <stdlib.h>
#include "lista-estatica.h"

int criaLista(Lista *lista)
{
  if (lista == NULL)
  {
    return FALHA;
  }
  lista->tamanho = 0;
  return SUCESSO;
}

int insereLista(Lista *lista, int valor)
{
  if (lista->tamanho >= TAMANHO_MAXIMO)
  {
    return FALHA;
  }
  lista->elementos[lista->tamanho] = valor;
  lista->tamanho++;
  return SUCESSO;
}

int quantidadePar(Lista *lista)
{
  int cont = 0;
  for (int i = 0; i < lista->tamanho; i++)
  {
    if (lista->elementos[i] % 2 == 0)
    {
      cont++;
    }
  }
  return cont;
}

int mediaLista(Lista *lista)
{
  if (lista->tamanho == 0)
  {
    return FALHA;
  }
  int soma = somaLista(lista);
  int media = soma / lista->tamanho;
  return media;
}

int maiorLista(Lista *lista)
{
  if (lista->tamanho == 0)
  {
    return FALHA;
  }
  int maior = lista->elementos[0];
  for (int i = 0; i < lista->tamanho; i++)
  {
    if (lista->elementos[i] > maior)
    {
      maior = lista->elementos[i];
    }
  }
  return maior;
}

int menorLista(Lista *lista)
{
  if (lista->tamanho == 0)
  {
    return FALHA;
  }
  int menor = lista->elementos[0];
  for (int i = 0; i < lista->tamanho; i++)
  {
    if (lista->elementos[i] < menor)
    {
      menor = lista->elementos[i];
    }
  }
  return menor;
}

int posicaoMaiorLista(Lista *lista)
{
  int maior = maiorLista(lista);
  for (int i = 0; i < lista->tamanho; i++)
  {
    if (lista->elementos[i] == maior)
    {
      return i;
    }
  }
}

int posicaoMenorLista(Lista *lista)
{
  int menor = menorLista(lista);
  for (int i = 0; i < lista->tamanho; i++)
  {
    if (lista->elementos[i] == menor)
    {
      return i;
    }
  }
}

int somaLista(Lista *lista)
{
  int soma = 0;
  for (int i = 0; i < lista->tamanho; i++)
  {
    soma += lista->elementos[i];
  }
  return soma;
}

int ehPrimo(int n)
{
  if (n < 2)
    return 0;
  for (int i = 2; i * i <= n; i++)
  {
    if (n % i == 0)
      return 0;
  }
  return 1;
}

int quantidadePrimosLista(Lista *lista)
{
  int quantidade = 0;
  for (int i = 0; i < lista->tamanho; i++)
  {
    if (ehPrimo(lista->elementos[i]))
    {
      quantidade++;
    }
  }
  return quantidade;
}


void imprimeLista(Lista *lista) {
  for(int i=0;i<lista->tamanho;i++) {
    printf("%d ", lista->elementos[i]);
  }
  printf("\n");
}