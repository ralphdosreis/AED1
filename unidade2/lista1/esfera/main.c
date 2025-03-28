#include <stdio.h>
#include "esfera.h"

int main() {
  Esfera e;
  double raio;
  printf("Informe o raio: ");
  scanf("%lf", &raio);

  inicializarEsfera(&e, raio);
  printf("O raio da esfera e: %.2lf\n", obterRaio(&e));
  printf("A area da esfera e: %.2lf\n", calculaArea(&e));
  printf("O volume da esfera e: %.2lf\n", calculaVolume(&e));
  return 0;
}