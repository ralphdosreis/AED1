#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

void push(No **topo, char simbolo)
{
  No *novo = (No *)malloc(sizeof(No));
  novo->simbolo = simbolo;
  novo->prox = *topo;
  *topo = novo;
}

char pop(No **topo)
{
  if (*topo == NULL)
    return '\0'; // pilha vazia
  No *remover = *topo;
  char simbolo = remover->simbolo;
  *topo = remover->prox;
  free(remover);
  return simbolo;
}

int vazia(No *topo)
{
  return topo == NULL;
}

int verificaExpressao(char *expr)
{
  No *pilha = NULL;
  for (int i = 0; expr[i] != '\0'; i++)
  {
    if (expr[i] == '(')
    {
      push(&pilha, '(');
    }
    else if (expr[i] == ')')
    {
      if (vazia(pilha))
      {
        return 0;
      }
      pop(&pilha);
    }
  }
  int resultado = vazia(pilha);

  while (!vazia(pilha))
  {
    pop(&pilha);
  }

  return resultado;
}