#include <stdio.h>
#include "conjunto.h"
#define SUCESSO 1
#define FALHA 0
#define TRUE 1
#define FALSE 0

int criaConjunto(Conjunto *c)
{
  if (c == NULL)
    return FALHA;
  c->tamanho = 0;
  return SUCESSO;
}

int conjuntoVazio(Conjunto *c)
{
  return (c->tamanho == 0) ? TRUE : FALSE;
}

int insereElementoConjunto(int x, Conjunto *c)
{
  if (c == NULL)
    return FALHA;
  for (int i = 0; i < c->tamanho; i++)
  {
    if (c->elementos[i] == x)
      return FALHA;
  }
  c->elementos[c->tamanho++] = x;
  return SUCESSO;
}

int excluirElementoConjunto(int x, Conjunto *c)
{
  if (c == NULL)
    return FALHA;
  for (int i = 0; i < c->tamanho; i++)
  {
    if (c->elementos[i] == x)
    {
      c->elementos[i] = c->elementos[c->tamanho - 1];
      c->tamanho--;
      return SUCESSO;
    }
  }
  return FALHA;
}

int tamanhoConjunto(Conjunto *c) {
  return c->tamanho;
}

int maior(int x, Conjunto *c) {
  int quantidade = 0;
  for (int i=0;i<c->tamanho;i++) {
    if (c->elementos[i] > x) quantidade++;
  }
  return quantidade;
}

int menor(int x, Conjunto *c) {
  int quantidade = 0;
  for(int i=0;i<c->tamanho;i++) {
    if (c->elementos[i] < x) quantidade ++;
  }
  return quantidade;
}

int pertenceConjunto(int x, Conjunto *c) {
  for(int i=0;i<c->tamanho;i++) {
    if(c->elementos[i] == x) return TRUE;
  }
  return FALSE;
}

int conjuntosIdenticos(Conjunto *c1, Conjunto *c2) {
  int identico = FALSE;
  for(int i=0;i<c1->tamanho;i++) {
    for(int j=0;i<c2->tamanho;j++) {
      if (c1->elementos[i] == c2->elementos[j]) identico = TRUE; break;
    }
    if (!identico) return FALSE;
  }
  return TRUE;
}

int subconjunto(Conjunto *c1, Conjunto *c2) {
  int subconjunto = FALSE;
  for(int i=0;i<c1->tamanho;i++) {
    for(int j=0;j<c2->tamanho;j++) {
      if (c1->elementos[i] == c2->elementos[j]) subconjunto = TRUE; break;
    }
    if (!subconjunto) return FALSE;
  }
  return TRUE;
}