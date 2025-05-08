// É um tipo de estrutura de dados dinâmica que permite a realização de operações de inserção e de remoção de elementos (ou objetos)
// É um tipo de estrutura de dados, de tamanho variável, em que se estabelece a política FIFO (First In, First Out) para a inserção/remoção de elementos nela presentes
// Para obedecer à política FIFO, as operações de inserção e remoção devem obrigatoriamente serem realizadas em extremidades opostas da fila
// Há, essencialmente, duas maneiras para representar computacionalmente uma fila, por contiguidade(alocação estática) e por encadeamento(alocação dinâmica)

#include "fila.h"

// Criar uma fila inicialmente vazia, por contiguidade
int criarFilaVazia(Fila *fila)
{
  fila->tamanho = 0;
  return (SUCESSO);
}

// OU

// int criarFilaVazia(Fila *fila) {
//   int i;
//   fila->tamanho = 0;
//   for(i=0;i<TAMANHO_MAXIMO_FILA;i++) {
//     fila->elementos[i].chave = CHAVE_INVALIDA;
//   }
//   return (SUCESSO);
// }

// Criar uma fila com um único elemento
int criarFilaChave(Fila *fila, Elemento elemento)
{
  fila->elementos[0] = elemento;
  fila->tamanho = 1;
  return (SUCESSO);
}

// Determinar o tamanho da fila
int tamanhoFila(Fila fila)
{
  if (fila.tamanho >= 0)
  {
    return (fila.tamanho);
  }
  else
  {
    return (FALHA);
  }
}

// Mostrar um elemento da fila
void mostrarElemento(Elemento elemento)
{
  printf("Chave....: %u\n", elemento.chave);
  printf("Dado.....: %u\n", elemento.dado);
}

// Mostrar toda a fila
void mostrarFila(Fila fila)
{
  unsigned int i;
  if (fila.tamanho == 0)
  {
    printf("Atencao: A fila esta vazia.\n");
  }
  else
  {
    printf("A fila linear possui %u elementos.\n\n", fila.tamanho);
    for (i = 0; i < fila.tamanho; i++)
    {
      printf("Elemento n.:%u\n", (i + 1));
      mostrarElemento(fila.elementos[i]);
    }
  }
}

// Consulta elemento pela posição dele
Elemento consultaPosicao(Fila fila, unsigned int intPosicao)
{
  Elemento elementoResultado;
  if ((intPosicao > 0) && (intPosicao <= fila.tamanho))
  {
    elementoResultado = fila.elementos[intPosicao - 1];
  }
  else
  {
    elementoResultado.chave = CHAVE_INVALIDA;
  }
  return (elementoResultado);
}

// Inserir elemento no final da fila
int insFinal(Fila *fila, Elemento elemento)
{
  unsigned int i;
  Elemento auxiliar;

  if (fila->tamanho == TAMANHO_MAXIMO_FILA)
  {
    return (FALHA);
  }
  else
  {
    fila->elementos[fila->tamanho] = elemento;
    fila->tamanho++;
    return (SUCESSO);
  }
}

// Remover elemento no inicio da fila
Elemento remInicio(Fila *fila)
{
  unsigned int i;
  Elemento elementoResultado;

  if (fila->tamanho == 0)
  {
    elementoResultado.chave = CHAVE_INVALIDA;
    return (elementoResultado);
  }
  else
  {
    elementoResultado = fila->elementos[0];
    for (i = 0; i < (fila->tamanho - 1); i++)
    {
      fila->elementos[i] = fila->elementos[i + 1];
    }
    fila->tamanho--;
    return (elementoResultado);
  }
}