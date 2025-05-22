#include <stdio.h>
#include "lista-numeros.h"

int main()
{
  Lista lista;
  Numero n1 = {1, 10};
  Numero n2 = {2, 20};
  Numero n3 = {3, 30};
  Numero resultado;

  if (criaListaVazia(&lista) == SUCESSO)
  {
    printf("Lista criada!\n");
  }

  insereInicio(&lista, n1);
  insereInicio(&lista, n2);

  insereFinal(&lista, n3);

  printf("Lista atual: ");
  imprimeLista(&lista);
  printf("\n");

  if (consultaListaValor(&lista, 20, &resultado) == SUCESSO)
  {
    printf("Elemento encontrado: chave = %d, valor = %d\n", resultado.chave, resultado.valor);
  }
  else
  {
    printf("Elemento com valor informado não encontrado!\n");
  }

  if (consultaListaIndice(&lista, 1, &resultado) == SUCESSO)
  {
    printf("Elemento no indice informado: chave = %d, valor = %d\n", resultado.chave, resultado.valor);
  }

  removeInicio(&lista);
  printf("Após remover do inicio: ");
  imprimeLista(&lista);
  printf("\n");

  removeFinal(&lista);
  printf("Após remover do final: ");
  imprimeLista(&lista);
  printf("\n");

  printf("Tamanho atual da lista: %d\n", tamanhoLista(&lista));
  return 0;
}