#ifndef NUMERO_COMPLEXO_H
#define NUMERO_COMPLEXO_H

typedef struct
{
  double real;
  double imaginario;
} Complexo;

Complexo* criarComplexo(double real, double imaginario);
void destruirComplexo(Complexo* c);
Complexo* somarComplexos(Complexo* c1, Complexo* c2);
Complexo* subtrairComplexos(Complexo* c1, Complexo* c2);
Complexo* multiplicarComplexos(Complexo* c1, Complexo* c2);
void imprimirComplexo(Complexo* c);

#endif