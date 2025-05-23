#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

void inicializaFila(Fila *f) {
    f->inicio = 0;
    f->fim = 0;
    f->tamanho = 0;
}

int filaCheia(Fila *f) {
    return f->tamanho == MAX;
}

int filaVazia(Fila *f) {
    return f->tamanho == 0;
}

int enfileira(Fila *f, int valor) {
    if (filaCheia(f)) return 0;
    f->dados[f->fim] = valor;
    f->fim = (f->fim + 1) % MAX;
    f->tamanho++;
    return 1;
}

int desenfileira(Fila *f, int *valor) {
    if (filaVazia(f)) return 0;
    *valor = f->dados[f->inicio];
    f->inicio = (f->inicio + 1) % MAX;
    f->tamanho--;
    return 1;
}

void copiaFila(Fila *F1, Fila *F2) {
    inicializaFila(F2); // Garante que F2 esteja vazia
    int i = F1->inicio;
    for (int cont = 0; cont < F1->tamanho; cont++) {
        enfileira(F2, F1->dados[i]);
        i = (i + 1) % MAX;
    }
}

void imprimeFila(Fila *f) {
    if (filaVazia(f)) {
        printf("Fila vazia.\n");
        return;
    }
    int i = f->inicio;
    for (int cont = 0; cont < f->tamanho; cont++) {
        printf("%d ", f->dados[i]);
        i = (i + 1) % MAX;
    }
    printf("\n");
}