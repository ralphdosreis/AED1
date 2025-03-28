#include <stdio.h>
#include "numero-complexo.h"

int main()
{
  Complexo *c1, *c2, *resultado;
  double real1, imag1, real2, imag2;

  printf("Digite a parte real e imaginaria do primeiro numero complexo: ");
  scanf("%lf %lf", &real1, &imag1);
  c1 = criarComplexo(real1, imag1);

  printf("Digite a parte real e imaginaria do segundo numero complexo: ");
  scanf("%lf %lf", &real2, &imag2);
  c2 = criarComplexo(real2, imag2);

  printf("\nPrimeiro numero complexo: ");
  imprimirComplexo(c1);
  printf("Segundo numero complexo: ");
  imprimirComplexo(c2);

  resultado = somarComplexos(c1, c2);
  printf("Soma: ");
  imprimirComplexo(resultado);
  destruirComplexo(resultado);

  resultado = subtrairComplexos(c1, c2);
  printf("Subtracao: ");
  imprimirComplexo(resultado);
  destruirComplexo(resultado);

  resultado = multiplicarComplexos(c1, c2);
  printf("Multiplicacao: ");
  imprimirComplexo(resultado);
  destruirComplexo(resultado);

  destruirComplexo(c1);
  destruirComplexo(c2);

  return 0;
}