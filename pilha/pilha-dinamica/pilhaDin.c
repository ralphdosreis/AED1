#include <stdio.h>
#include <stdlib.h>
#include "pilhaDin.h"

struct elemento
{
  struct aluno dados;
  struct elemento *prox;
};
typedef struct elemento Elem;

Pilha *cria_Pilha()
{ // Criando uma pilha
  Pilha *pi = (Pilha *)malloc(sizeof(Pilha));
  if (pi != NULL)
  {
    *pi = NULL;
    return pi;
  }
}

void libera_Pilha(Pilha *pi)
{ // Destruindo uma pilha
  if (pi != NULL)
  {
    Elem *no;
    while ((*pi) != NULL)
    {
      no = *pi;
      *pi = (*pi)->prox;
      free(no);
    }
    free(pi);
  }
}

int tamanho_Pilha(Pilha *pi)
{ // Tamanho da pilha
  if (pi == NULL)
  {
    return 0;
  }
  int cont = 0;
  Elem *no = *pi;
  while (no != NULL)
  {
    cont++;
    no = no->prox;
    return cont;
  }
}

int Pilha_cheia(Pilha *pi) { // Pilha cheia
  return 0;
}

int Pilha_vazia(Pilha *pi) { // Retornando se a pilha está vazia
  if (pi == NULL) return 1;
  if (*pi == NULL) return 1;
  return 0;
}

int insere_Pilha(Pilha *pi, struct aluno al) { // Inserindo um elemento na pilha
  if (pi == NULL) return 0;
  Elem *no;
  no = (Elem*) malloc(sizeof(Elem));
  if(no==NULL) return 0;
  no->dados = al;
  no->prox = (*pi);
  *pi = no;
  return 1;
}

int remove_Pilha(Pilha *pi) { // Removendo um elemento da pilha
  if (pi == NULL) return 0;
  if((*pi) == NULL) return 0;
  Elem *no = *pi;
  *pi = no->prox;
  free(no);
  return 1;
}

int acessa_topo_Pilha(Pilha *pi, struct aluno *al) { // Acessando o topo da pilha
  if (pi==NULL) return 0;
  if((*pi) == NULL) return 0;
  *al = (*pi) ->dados;
  return 1;
}