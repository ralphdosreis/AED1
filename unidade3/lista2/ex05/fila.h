#ifndef FILA_H
#define FILA_H

#define MAX 100

typedef struct {
    int dados[MAX];
    int inicio;
    int fim;
    int tamanho;
} Fila;

void inicializaFila(Fila *f);
int filaCheia(Fila *f);
int filaVazia(Fila *f);
int enfileira(Fila *f, int valor);
int desenfileira(Fila *f, int *valor);
void copiaFila(Fila *F1, Fila *F2);
void imprimeFila(Fila *f);

#endif