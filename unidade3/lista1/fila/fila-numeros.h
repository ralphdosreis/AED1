#ifndef FILA_NUMEROS_H
#define FILA_NUMEROS_H

#include <stdio.h>
#include <stdlib.h>

#define SUCESSO 1
#define FALHA -1
#define CHAVE_INVALIDA 0

#define TAMANHO_MAXIMO_FILA 100

typedef struct {
  int chave;
} Elemento;

typedef struct fila {
  Elemento elemento[TAMANHO_MAXIMO_FILA];
  int tamanho;
} Fila;

int criacaoFila(Fila *fila);
int inicializaFila(Fila *fila, Elemento elemento);
int tamanhoFila(Fila *fila);
int filaVazia(Fila *fila);
int filaCheia(Fila *fila);
int insereFila(Fila *fila, Elemento elemento);
Elemento remInicio(Fila *fila);
int consultaPrimeiro(Fila *fila, int *valor);
int imprimeFila(Fila *fila);

#endif