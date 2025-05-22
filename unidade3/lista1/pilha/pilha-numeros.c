#include <stdio.h>
#include "pilha-numeros.h"

int criaPilha(Pilha *pilha)
{
  if (pilha != NULL)
  {
    pilha->topo = 0;
  }
  return (SUCESSO);
}

void inicializaPilha(Pilha *pilha)
{
  if (pilha != NULL)
    pilha->topo = 0;
}

// void liberaPilha(Pilha *pilha)
// {
//   if (pilha != NULL)
//   {
//     free(pilha);
//   }
// }

int tamanhoPilha(Pilha *pilha)
{
  if (pilha != NULL)
  {
    return pilha->topo;
  }
  return -1;
}

int pilhaVazia(Pilha *pilha)
{
  return (pilha->topo == 0);
}

int pilhaCheia(Pilha *pilha)
{
  return (pilha->topo == TAMANHO_MAXIMO);
}

int push(Pilha *pilha, int numero)
{
  if (pilhaCheia(pilha))
  {
    return FALHA;
  }
  pilha->dados[pilha->topo++] = numero;
  return SUCESSO;
}

int pop(Pilha *pilha, int *valor) {
  if (pilhaVazia(pilha)) {
    return FALHA;
  }
  if (valor != NULL) {
    *valor = pilha->dados[--pilha->topo];
  } else {
    pilha->topo--;
  }
  return SUCESSO;
}

int consultaTopo(Pilha *pilha, int *valor)
{
  if (pilhaVazia(pilha))
  {
    return FALHA;
  }
  *valor = pilha->dados[pilha->topo - 1];
  return SUCESSO;
}

int inmprimePilha(Pilha *pilha)
{
  if (pilha == NULL || pilhaVazia(pilha))
  {
    return FALHA;
  }
  else
  {
    printf("Pilha (topo -> base): ");
    for (int i = pilha->topo - 1; i >= 0; i--)
    {
      printf("%d ", pilha->dados[i]);
    }
    printf("\n");
  }
}
