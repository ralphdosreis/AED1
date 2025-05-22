#include <stdio.h>
#include <stdlib.h>
#include "lista-dinamica.h"

int main()
{
  Lista *lista;

  criaLista(lista);

  insereLista(lista, 6);
  insereLista(lista, 18);
  insereLista(lista, 51);
  insereLista(lista, 37);
  insereLista(lista, 24);
  insereLista(lista, 42);

  imprimirLista(lista);

  removeNPrimeiros(lista, 2);

  imprimirLista(lista);

  removeNUltimos(lista, 3);

  imprimirLista(lista);

  return 0;
}