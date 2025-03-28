#ifndef PONTO_H
#define PONTO_H
#include <stdbool.h>
typedef struct ponto Ponto;

struct ponto
{
  float x;
  float y;
  bool visibilidade;
};

Ponto *ponto_cria(float x, float y, bool visibilidade);
void ponto_libera(Ponto *p);
void ponto_acessa(Ponto *p, float *x, float *y);
void ponto_atribui(Ponto *p, float x, float y);
float ponto_distancia(Ponto *p1, Ponto *p2);
void ponto_move(Ponto *p, float x, float y, int movimento);
void ponto_oculta(Ponto *p);
void ponto_mostra(Ponto *p);

#endif
