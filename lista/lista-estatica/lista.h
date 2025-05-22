#include <stdio.h>
#include <stdlib.h>

#define SUCESSO 1
#define FALHA -1
#define CHAVE_INVALIDA 0
#define TAMANHO_MAXIMO_LISTA 100

typedef struct {
  unsigned int chave;
  unsigned int dado;
} Celula;

typedef struct
{
  Celula celulas[TAMANHO_MAXIMO_LISTA];
  unsigned int tamanho;
} ListaLinear;
