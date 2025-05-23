#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

void inicializaPilha(PilhaDinamica *p) {
    p->topo = NULL;
}

int vazia(PilhaDinamica *p) {
    return p->topo == NULL;
}

void push(PilhaDinamica *p, int valor) {
    No *novo = (No *)malloc(sizeof(No));
    novo->valor = valor;
    novo->prox = p->topo;
    p->topo = novo;
}

int pop(PilhaDinamica *p, int *valor) {
    if (vazia(p)) return 0;
    No *remover = p->topo;
    *valor = remover->valor;
    p->topo = remover->prox;
    free(remover);
    return 1;
}

void mostraImpares(PilhaDinamica *p) {
    PilhaDinamica aux;
    inicializaPilha(&aux);
    int valor, cont = 0;

    printf("Elementos ímpares na pilha: ");
    while (!vazia(p)) {
        pop(p, &valor);
        if (valor % 2 != 0) {
            printf("%d ", valor);
            cont++;
        }
        push(&aux, valor);
    }

    while (!vazia(&aux)) {
        pop(&aux, &valor);
        push(p, valor);
    }

    printf("\nTotal de ímpares: %d\n", cont);
}