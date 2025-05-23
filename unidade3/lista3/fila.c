#include "fila.h"
#include <stdio.h>

void inicializa(FilaPrioridade *f) {
    f->tamanho = 0;
}

int inserir(FilaPrioridade *f, int valor) {
    if (f->tamanho == MAX)
        return FALHA;

    int i = f->tamanho - 1;
    while (i >= 0 && f->dados[i] > valor) {
        f->dados[i + 1] = f->dados[i];
        i--;
    }
    f->dados[i + 1] = valor;
    f->tamanho++;
    return SUCESSO;
}

int remover(FilaPrioridade *f, int *removido) {
    if (f->tamanho == 0)
        return FALHA;

    *removido = f->dados[0];
    for (int i = 1; i < f->tamanho; i++) {
        f->dados[i - 1] = f->dados[i];
    }
    f->tamanho--;
    return SUCESSO;
}

void exibir(FilaPrioridade *f) {
    printf("Fila de prioridade (ordem crescente): ");
    for (int i = 0; i < f->tamanho; i++) {
        printf("%d ", f->dados[i]);
    }
    printf("\n");
}