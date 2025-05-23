#ifndef PILHA_H
#define PILHA_H

typedef struct no {
    char simbolo;
    struct no *prox;
} No;


void push(No **topo, char simbolo);
char pop(No **topo);
int vazia(No *topo);
int verificaExpressao(char *expr);

#endif