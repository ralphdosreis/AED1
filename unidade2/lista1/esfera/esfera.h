#ifndef ESFERA_H
#define ESFERA_H

typedef struct {
  double raio;
} Esfera;

void inicializarEsfera(Esfera *e, double raio);
double obterRaio(Esfera *e);
double calculaArea(Esfera *e);
double calculaVolume(Esfera *e);

#endif