#include <math.h>
#include "cilindro.h"
#define PI 3.14

void inicializarCilindro(Cilindro *c, double altura, double raio)
{
  c->altura = altura;
  c->raio = raio;
}

double obterAltura(Cilindro *c)
{
  return c->altura;
}

double obterRaio(Cilindro *c)
{
  return c->raio;
}

double calculaArea(Cilindro *c)
{
  return 2 * PI * c->raio * (c->raio + c->altura);
}

double calculaVolume(Cilindro *c)
{
  return PI * pow(c->raio, 2) * c->altura;
}