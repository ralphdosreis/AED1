#include <stdio.h>
#include "lista-encadeada.h"

int main()
{
  No *lista = NULL;

  insereFinal(&lista, 10);
  insereFinal(&lista, 20);
  insereFinal(&lista, 30);
  insereFinal(&lista, 40);

  mostraAntecessorESucessor(lista, 10);
  mostraAntecessorESucessor(lista, 30);
  mostraAntecessorESucessor(lista, 40);
  mostraAntecessorESucessor(lista, 50);

  return 0;
}