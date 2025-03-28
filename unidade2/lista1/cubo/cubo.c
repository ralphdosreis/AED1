#include <stdio.h>
#include "cubo.h"

void inicializarCubo(Cubo *c, double lado)
{
  if (lado <= 0)
  {
    printf("Erro: O lado do cubo deve ser maior que zero.\n");
    return;
  }
  c->lado = lado;
}

double obterLado(Cubo *c)
{
  return c->lado;
}

double calcularArea(Cubo *c)
{
  return 6 * (c->lado * c->lado);
}

double calcularVolume(Cubo *c)
{
  return c->lado * c->lado * c->lado;
}