#ifndef PILHA_H
#define PILHA_H

#define MAX 200

typedef struct
{
  char dados[MAX];
  int topo;
} Pilha;

void inicializaPilha(Pilha *p);
int pilhaCheia(Pilha *p);
int pilhaVazia(Pilha *p);
void push(Pilha *p, char c);
char pop(Pilha *p);
void limparString(char *origem, char *limpa);
int ehPalindromo(char *str);

#endif