#include <stdio.h>
#include "fila-numeros.h"

int main() {
  Fila fila;
  Elemento elemento;
  int valor;

  if(criacaoFila(&fila) == SUCESSO) {
    printf("Fila criada!\n");
  } else {
    printf("Erro na criacao!\n");
  }

  for(int i = 1;i<=10;i++) {
    elemento.chave = i*10;
    if (insereFila(&fila, elemento) == SUCESSO) {
      printf("Inserido: %d\n", elemento.chave);
    } else {
      printf("Falha ao inserir: %d\n", elemento.chave);
    }
  }

  imprimeFila(&fila);

  if(consultaPrimeiro(&fila, &valor) == SUCESSO) {
    printf("Primeiro elemento fila: %d\n", valor);
  } else {
    printf("Fila vazia!\n");
  }

  elemento = remInicio(&fila);

  imprimeFila(&fila);

  if (filaVazia(&fila)) {
    printf("A fila esta vazia!\n");
  }

  if (filaCheia(&fila)) {
    printf("A fila esta cheia!\n");
  }
  return 0;
}