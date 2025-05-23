#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main() {
    char expressao[200];

    printf("Digite a expressao: ");
    fgets(expressao, sizeof(expressao), stdin);

    if (verificaExpressao(expressao)) {
        printf("Expressao com parenteses CORRETOS.\n");
    } else {
        printf("Expressao com parenteses INCORRETOS.\n");
    }

    return 0;
}