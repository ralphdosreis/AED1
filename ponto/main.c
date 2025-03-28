#include <stdio.h>
#include <stdbool.h>
#include "ponto.h"

int main()
{
  float xp, yp, xq, yq, d;
  Ponto *p, *q;

  printf("digite as coordenadas x e y para o ponto 1: ");
  scanf("%f %f", &xp, &yp);
  printf("digite as coordenadas x e y para o ponto 2: ");
  scanf("%f %f", &xq, &yq);
  p = ponto_cria(xp, yp, true);
  q = ponto_cria(xq, yq, true);
  d = ponto_distancia(p, q);
  ponto_acessa(p, &xp, &yp);
  ponto_acessa(q, &xq, &yq);
  printf("Distancia entre os pontos (%.2f,%.2f) e (%.2f,%.2f) = %.5f\n", xp, yp, xq, yq, d);
  ponto_libera(p);
  ponto_libera(q);
  return (0);
}