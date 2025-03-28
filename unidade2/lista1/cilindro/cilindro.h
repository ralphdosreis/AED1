#ifndef CILINDRO_H
#define CILINDRO_H

typedef struct {
  double altura, raio;
} Cilindro;

void inicializarCilindro(Cilindro *c, double altura, double raio);
double obterAltura(Cilindro *c);
double obterRaio(Cilindro *c);
double calculaArea(Cilindro *c);
double calculaVolume(Cilindro *c);

#endif 