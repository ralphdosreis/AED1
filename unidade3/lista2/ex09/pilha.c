#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "pilha.h"

void inicializaPilha(Pilha *p) {
    p->topo = -1;
}

int pilhaCheia(Pilha *p) {
    return p->topo == MAX - 1;
}

int pilhaVazia(Pilha *p) {
    return p->topo == -1;
}

void push(Pilha *p, char c) {
    if (!pilhaCheia(p)) {
        p->topo++;
        p->dados[p->topo] = c;
    }
}

char pop(Pilha *p) {
    if (!pilhaVazia(p)) {
        return p->dados[p->topo--];
    }
    return '\0';
}

void limparString(char *origem, char *limpa) {
    int j = 0;
    for (int i = 0; origem[i] != '\0'; i++) {
        if (isalnum(origem[i])) {
            limpa[j++] = tolower(origem[i]);
        }
    }
    limpa[j] = '\0';
}

int ehPalindromo(char *str) {
    char limpa[MAX];
    limparString(str, limpa);

    Pilha p;
    inicializaPilha(&p);

    int len = strlen(limpa);
    for (int i = 0; i < len; i++) {
        push(&p, limpa[i]);
    }

    for (int i = 0; i < len; i++) {
        if (pop(&p) != limpa[i]) {
            return 0;
        }
    }

    return 1;
}
