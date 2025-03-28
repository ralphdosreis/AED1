#include <stdio.h>
#include <stdlib.h>
#include "numero-complexo.h"

Complexo* criarComplexo(double real, double imaginario) {
  Complexo* c=(Complexo*)malloc(sizeof(Complexo));
  if (c==NULL) {
    printf("Erro ao alocar memoria.\n");
    return NULL;
  }
  c->real = real;
  c->imaginario = imaginario;
  return c;
}

void destruirComplexo(Complexo* c) {
  free(c);
}

Complexo* somarComplexos(Complexo* c1, Complexo* c2) {
  return criarComplexo(c1->real + c2->real, c1->imaginario + c2 ->imaginario);
}

Complexo* subtrairComplexos(Complexo* c1, Complexo* c2) {
  return criarComplexo(c1->real - c2->real, c1->imaginario - c2->imaginario);
}

Complexo* multiplicarComplexos(Complexo* c1, Complexo* c2) {
  double real = c1->real * c2->real - c1->imaginario * c2->imaginario;
  double imaginario = c1->real * c2->imaginario - c1->imaginario * c2->real;
  return criarComplexo(real, imaginario);
}

void imprimirComplexo(Complexo* c) {
  if(c->imaginario >= 0) printf("%.2lf + %.2lfi\n", c->real, c->imaginario);
  else printf("%.2lf - %.2lfi\n", c->real, -c->imaginario);
}