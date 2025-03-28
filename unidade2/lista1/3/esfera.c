#include <math.h>
#include "esfera.h"
#define PI 3.14

void inicializarEsfera(Esfera *e, double raio) {
  e->raio = raio;
}

double obterRaio(Esfera *e) {
  return e->raio;
}

double calculaArea(Esfera *e) {
  return 4 * PI * pow(e->raio, 2);
}

double calculaVolume(Esfera *e) {
  return (4/3)*PI*pow(e->raio,3);
}