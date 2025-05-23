#include <stdio.h>
#include "lista-estatica.h"

int main()
{
  Lista *lista;
  criaLista(lista);
  insereLista(lista, 50);
  insereLista(lista, 24);
  insereLista(lista, 2);

  imprimeLista(lista);

  printf("Tem %d elementos par(es) na lista\n", quantidadePar(lista));
  printf("A media dos elementos da lista é %d\n", mediaLista(lista));
  printf("O maior elemento da lista é %d\n", maiorLista(lista));
  printf("O menor elemento da lista é %d\n", menorLista(lista));
  printf("O indice do maior elemento da lista é %d\n", posicaoMaiorLista(lista));
  printf("O indice do menor elemento da lista é %d\n", menorLista(lista));
  printf("A soma dos elementos da lista é %d\n", somaLista(lista));
  printf("A lista possui %d elemento(s) primo(s)\n", quantidadePrimosLista(lista));

  return 0;
}