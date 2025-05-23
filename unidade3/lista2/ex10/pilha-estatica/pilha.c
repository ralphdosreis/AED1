#include <stdio.h>
#include "pilha.h"

void inicializaPilha(PilhaEstatica *p)
{
  p->topo = -1;
}

int vazia(PilhaEstatica *p)
{
  return p->topo == -1;
}

int cheia(PilhaEstatica *p)
{
  return p->topo == MAX - 1;
}

int push(PilhaEstatica *p, int valor)
{
  if (cheia(p))
    return 0;
  p->dados[++(p->topo)] = valor;
  return 1;
}

int pop(PilhaEstatica *p, int *valor)
{
  if (vazia(p))
    return 0;
  *valor = p->dados[(p->topo)--];
  return 1;
}

void mostraImpares(PilhaEstatica *p)
{
  PilhaEstatica aux;
  inicializaPilha(&aux);
  int valor, cont = 0;

  printf("Elementos ímpares na pilha: ");
  while (!vazia(p))
  {
    pop(p, &valor);
    if (valor % 2 != 0)
    {
      printf("%d ", valor);
      cont++;
    }
    push(&aux, valor);
  }

  while (!vazia(&aux))
  {
    pop(&aux, &valor);
    push(p, valor);
  }

  printf("\nTotal de ímpares: %d\n", cont);
}