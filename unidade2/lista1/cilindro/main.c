#include <stdio.h>
#include "cilindro.h"

int main()
{
  Cilindro c;
  double altura, raio;
  printf("Informe a altura do cilindro: ");
  scanf("%lf", &altura);
  printf("Informe o raio do cilindro: ");
  scanf("%lf", &raio);

  inicializarCilindro(&c, altura, raio);
  printf("A altura do cilindro e: %.2lf\n", obterAltura(&c));
  printf("O raio do cilindro e: %.2lf\n", obterRaio(&c));
  printf("A area do cilindro e: %.2lf\n", calculaArea(&c));
  printf("O volume do cilindro e: %.2lf\n", calculaVolume(&c));
  return 0;
}