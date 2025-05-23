#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main() {
    Fila F1, F2, F3;
    inicializaFila(&F1);
    inicializaFila(&F2);
    inicializaFila(&F3);

    enfileira(&F1, 1);
    enfileira(&F1, 3);
    enfileira(&F1, 5);

    enfileira(&F2, 2);
    enfileira(&F2, 4);
    enfileira(&F2, 6);
    enfileira(&F2, 8);

    printf("F1: ");
    imprimeFila(&F1);

    printf("F2: ");
    imprimeFila(&F2);

    intercalaFilas(&F1, &F2, &F3);

    printf("F3 (intercalada): ");
    imprimeFila(&F3);

    printf("F1 depois da intercalação: ");
    imprimeFila(&F1);

    printf("F2 depois da intercalação: ");
    imprimeFila(&F2);

    return 0;
}
