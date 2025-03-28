#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include "ponto.h"

Ponto *ponto_cria(float x, float y, bool visibilidade)
{
  Ponto *p = (Ponto *)malloc(sizeof(Ponto));
  if (p != NULL)
  {
    p->x = x;
    p->y = y;
    p->visibilidade = visibilidade;
  }
  return p;
}

void ponto_libera(Ponto *p)
{
  if (p != NULL)
  {
    free(p);
  }
}

void ponto_acessa(Ponto *p, float *x, float *y)
{
  if (p != NULL)
  {
    *x = p->x;
    *y = p->y;
  }
}

void ponto_atribui(Ponto *p, float x, float y)
{
  if (p != NULL)
  {
    p->x = x;
    p->y = y;
  }
}

float ponto_distancia(Ponto *p1, Ponto *p2)
{
  float dx, dy;
  dx = p1->x - p2->x;
  dy = p1->y - p2->y;
  return (sqrt(dx * dx + dy * dy));
}

void ponto_move(Ponto *p, float x, float y, int movimento)
{
}

void ponto_oculta(Ponto *p)
{
  p->visibilidade = false;
}

void ponto_mostra(Ponto *p)
{
  p->visibilidade = true;
}