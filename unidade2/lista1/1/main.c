#include <stdio.h>
#include "cubo.h"

int main()
{
  Cubo c;
  double lado;
  printf("Digite o tamanho do lado do cubo: ");
  scanf("%lf", &lado);

  inicializarCubo(&c, lado);
  printf("Tamanho do lado: %.2lf\n", obterLado(&c));
  printf("Area do cubo: %.2lf\n", calcularArea(&c));
  printf("Volume do cubo: %.2lf\n", calcularVolume(&c));
  return 0;
}