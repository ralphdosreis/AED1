#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main()
{
  Fila F1, F2;
  inicializaFila(&F1);

  enfileira(&F1, 10);
  enfileira(&F1, 20);
  enfileira(&F1, 30);
  enfileira(&F1, 40);

  printf("Fila F1 original:\n");
  imprimeFila(&F1);

  copiaFila(&F1, &F2);

  printf("Fila F2 (copia de F1):\n");
  imprimeFila(&F2);

  return 0;
}