#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "pilha.h"

int main() {
    char frase[MAX];

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    if (ehPalindromo(frase)) {
        printf("É um palíndromo.\n");
    } else {
        printf("Não é um palíndromo.\n");
    }

    return 0;
}