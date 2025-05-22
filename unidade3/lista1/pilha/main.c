#include <stdio.h>
#include "pilha-numeros.h"

int main()
{
  Pilha *pilha;
  criaPilha(pilha);
  inicializaPilha(pilha);
  push(pilha, 30);
  push(pilha, 20);
  push(pilha, 10);
  
  inmprimePilha(pilha);

  int valor;
  if (consultaTopo(pilha, &valor))
  {
    printf("Topo: %d\n", valor);
  }
  if (pop(pilha, &valor))
  {
    printf("Removido: %d\n", valor);
  }

  inmprimePilha(pilha);
  
  return 0;
}