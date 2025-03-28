#ifndef CUBO_H
#define CUBO_H

typedef struct
{
  double lado;
} Cubo;

void inicializarCubo(Cubo *c, double lado);
double obterLado(Cubo *c);
double calcularArea(Cubo *c);
double calcularVolume(Cubo *c);

#endif