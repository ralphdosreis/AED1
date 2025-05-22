#include <stdio.h>
#include "lista-estatica.h"

int main() {
  Lista *lista;

  criaLista(lista);

  inserirLista(lista, 10);
  inserirLista(lista, 8);
  inserirLista(lista, 27);
  inserirLista(lista, 42);
  inserirLista(lista, 105);
  inserirLista(lista, 19);

  imprimirLista(lista);

  removeNPrimeiros(lista, 2);

  imprimirLista(lista);

  removeNUltimos(lista, 3);

  imprimirLista(lista);

  return 0;
}