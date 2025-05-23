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

void intercalaFilas(Fila *F1, Fila *F2, Fila *F3) {
    int valor;
    while (!filaVazia(F1) || !filaVazia(F2)) {
        if (!filaVazia(F1)) {
            desenfileira(F1, &valor);
            enfileira(F3, valor);
        }
        if (!filaVazia(F2)) {
            desenfileira(F2, &valor);
            enfileira(F3, valor);
        }
    }
}

void imprimeFila(Fila *f) {
    if (filaVazia(f)) {
        printf("Fila vazia.\n");
        return;
    }
    int i = f->inicio;
    for (int c = 0; c < f->tamanho; c++) {
        printf("%d ", f->dados[i]);
        i = (i + 1) % MAX;
    }
    printf("\n");
}