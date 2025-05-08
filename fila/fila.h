#include <stdio.h>
#include <stdlib.h>

#define SUCESSO 1
#define FALHA -1
#define CHAVE_INVALIDA 0

#define TAMANHO_MAXIMO_FILA 100

typedef struct
{
  unsigned int chave;
  unsigned int dado;
} Elemento;

typedef struct fila
{
  Elemento elementos[TAMANHO_MAXIMO_FILA];
  unsigned int tamanho;
} Fila;

int criarFilaVazia(Fila *fila);
int criarFilaChave(Fila *fila, Elemento elemento);
int tamanhoFila(Fila fila);
void mostrarElemento(Elemento elemento);
void mostrarFila(Fila fila);
Elemento consultaPosicao(Fila fila, unsigned int intPosicao);
int insFinal(Fila *fila, Elemento elemento);
Elemento remInicio(Fila *fila);
