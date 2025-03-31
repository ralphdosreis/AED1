#include <stdio.h>
#include "conjunto.h"

int main()
{
  Conjunto c1, c2;

  criaConjunto(&c1);
  criaConjunto(&c2);

  conjuntoVazio(&c1);
  insereElementoConjunto(10, &c1);
  excluirElementoConjunto(5, &c1);

  printf("A cardinalidade do conjunto e: %d\n", tamanhoConjunto(&c1));
  printf("Existem %d elementos pertencentes ao conjunto maiores que o numero fornecido!\n", maior(1, &c1));
  printf("Existem %d elementos pertencentes ao conjunto menores que o numero fornecido!\n", menor(50, &c1));
  pertenceConjunto(4, &c1);

  printf("Os conjuntos sao identico? %s\n", conjuntosIdenticos(&c1, &c2) ? "Sim" : "Nao");
  printf("Os conjunto c1 esta contido em c2? %s\n", subconjunto(&c1, &c2) ? "Sim" : "Nao");
  return 0;
}