// Pilha estática é um tipo de estrutura de dados, de tamanho variável, em que se estabelece a política LIFO (Last In, First Out) para a inserção e remoção de dados
//Há, essencialmente, duas maneiras para representar computacionalmente uma pilha: 1) por contiguidade (alocação estática); 2) por encadeamento (alocação dinâmica)

#include <stdio.h>
#include "pilha.h"

int criarPilhaVazia(Pilha *pilha) {
  pilha ->tamanho = 0;
  return (SUCESSO);
}


// ou 

// int criarPilhaVazia(Pilha *pilha) {
//   int i;
//   pilha->tamanho = 0;
//   for(i=0;i<TAMANHO_MAXIMO_PILHA;i++) {
//     pilha->elementos[i].chave = CHAVE_INVALIDA;
//   }
//   return (SUCESSO);
// }

int tamanhoPilha(Pilha pilha) {
  if(pilha.tamanho >=0) {
    return pilha.tamanho;
  } else {
    return FALHA;
  }
}

void mostrarElemento(Elemento elemento) {
  printf("Chave....: %u\n", elemento.chave);
  printf("Dado.....:%u\n", elemento.dado);
}

void mostrarPilha(Pilha pilha) {
  unsigned int i;
  if (pilha.tamanho==0) {
    printf("Atencao: A pilha esta vazia.\n");
  } else {
    printf("A pilha possui %u elementos.\n\n", pilha.tamanho);
    for(i=0;i<pilha.tamanho;i++) {
      printf("Elemento n.:%u\n", (i+1));
      mostrarElemento(pilha.elementos[i]);
    }
  }
}

int push(Pilha *pilha, Elemento elemento) {
  unsigned int i;
  Elemento auxiliar;
  if(pilha->tamanho == TAMANHO_MAXIMO_PILHA) {
    return FALHA;
  } else {
    pilha->elementos[pilha->tamanho] = elemento;
    pilha->tamanho++;
    return SUCESSO;
  }
}

Elemento pop(Pilha *pilha) {
  unsigned i;
  Elemento elementoResultado;
  if (pilha->tamanho == 0) {
    elementoResultado.chave = CHAVE_INVALIDA;
    return elementoResultado;
  } else {
    elementoResultado = pilha->elementos[((pilha->tamanho) - 1)];
    pilha->tamanho--;
    return elementoResultado;
  }
}