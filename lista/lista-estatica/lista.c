#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

int criarListaVazia(ListaLinear *lista) { // Ciar uma lista inicialmente vazia
  lista->tamanho = 0;
  return(SUCESSO);
}

int criarListaChave(ListaLinear *lista, Celula celula) { // Criar uma lista com uma única célula
  lista->celulas[0] = celula;
  lista->tamanho = 1;
  return (SUCESSO);
}

int tamanhoLista(ListaLinear lista) { // Determinar o tamanho da lista
  if (lista.tamanho >= 0) {
    return (lista.tamanho);
  } else {
    return (FALHA);
  }
}

void mostrarCelula(Celula celula) { // Mostrar uma determinada célula da lista
  printf("Chave.....:%u\n", celula.chave);
  printf("Dado......:%u\n", celula.dado);
}

void mostrarLista(ListaLinear lista) { // Mostrar toda a lista
  int i;
  
  if(lista.tamanho == 0) {
    printf("Atencao: a lista esta vazia\n");
  } else {
    printf("A lista linear possui %u elementos\n\n", lista.tamanho);
    for(i=0;i<lista.tamanho;i++) {
      printf("Elemento n.:%u\n", i+1);
      mostrarCelula(lista.celulas[i]);
    }
  }
}

Celula consultaListaPosicao(ListaLinear lista, unsigned int intPosicao) { // Consulta célula baseado na posição dela
  Celula celulaResultado;
  if((intPosicao>0) && (intPosicao <= lista.tamanho)) {
    celulaResultado = lista.celulas[intPosicao-1];
  } else {
    celulaResultado.chave = CHAVE_INVALIDA;
  }
  return (celulaResultado);
}

