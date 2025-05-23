#include <stdio.h>
#include "fila.h"

int main() {
    FilaPrioridade fila;
    inicializa(&fila);

    inserir(&fila, 30);
    inserir(&fila, 10);
    inserir(&fila, 20);
    inserir(&fila, 5);

    exibir(&fila);

    int removido;
    remover(&fila, &removido);
    printf("Removido: %d\n", removido);

    exibir(&fila);

    return 0;
}
