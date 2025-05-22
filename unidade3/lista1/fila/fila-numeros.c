#include <stdio.h>
#include "fila-numeros.h"

int criacaoFila(Fila *fila)
{
  if (fila != NULL)
  {
    fila->tamanho = 0;
    return (SUCESSO);
  }
  return FALHA;
}

int inicializaFila(Fila *fila, Elemento elemento)
{
  if (fila != NULL)
  {
    fila->elemento[0] = elemento;
    fila->tamanho = 1;
    return (SUCESSO);
  }
  return FALHA;
}

int tamanhoFila(Fila *fila)
{
  if (fila->tamanho >= 0)
  {
    return fila->tamanho;
  }
  else
  {
    return FALHA;
  }
}

int filaVazia(Fila *fila)
{
  if (fila->tamanho == 0)
  {
    return (SUCESSO);
  }

  return 0;
}

int filaCheia(Fila *fila)
{
  if (fila->tamanho == TAMANHO_MAXIMO_FILA)
  {
    return (SUCESSO);
  }
  return 0;
}

int insereFila(Fila *fila, Elemento elemento)
{
  if (fila->tamanho == TAMANHO_MAXIMO_FILA)
  {
    return FALHA;
  }
  else
  {
    fila->elemento[fila->tamanho] = elemento;
    fila->tamanho++;
    return (SUCESSO);
  }
}

Elemento remInicio(Fila *fila)
{
  int i;
  Elemento elementoResultado;

  if (fila->tamanho == 0)
  {
    elementoResultado.chave = CHAVE_INVALIDA;
    return (elementoResultado);
  }
  else
  {
    elementoResultado = fila->elemento[0];
    for (i = 0; i < (fila->tamanho - 1); i++)
    {
      fila->elemento[i] = fila->elemento[i + 1];
    }
    fila->tamanho--;
    return (elementoResultado);
  }
}

int consultaPrimeiro(Fila *fila, int *valor)
{
  if (fila->tamanho == 0)
  {
    return FALHA;
  }
  *valor = fila->elemento[0].chave;
  return SUCESSO;
}

int imprimeFila(Fila *fila)
{
  if (filaVazia(fila) || fila == NULL)
  {
    return FALHA;
  }
  else
  {
    printf("Fila inicio -> fim: ");
    for (int i = 0; i <= fila->tamanho; i++)
    {
      printf("%d ", fila->elemento[i].chave);
    }
    printf("\n");
    return (SUCESSO);
  }
}
