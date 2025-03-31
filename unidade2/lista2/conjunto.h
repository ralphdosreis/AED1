#ifndef CONJUNTO_H
#define CONJUNTO_H
#define MAX 100

typedef struct
{
  int elementos[MAX];
  int tamanho;
} Conjunto;

int criaConjunto(Conjunto *c);
int conjuntoVazio(Conjunto *c);
int insereElementoConjunto(int x, Conjunto *c);
int excluirElementoConjunto(int x, Conjunto *c);
int tamanhoConjunto(Conjunto *c);
int maior(int x, Conjunto *c);
int menor(int x, Conjunto *c);
int pertenceConjunto(int x, Conjunto *c);
int conjuntosIdenticos(Conjunto *c1, Conjunto *c2);
int subconjunto(Conjunto *c1, Conjunto *c2);

#endif