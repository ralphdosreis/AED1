#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main()
{
  PilhaDinamica p;
  
  inicializaPilha(&p);
  push(&p, 1);
  push(&p, 4);
  push(&p, 7);
  push(&p, 8);
  mostraImpares(&p);

  return 0;
}
