// Escreva um programa que leia um inteiro N e crie uma matriz alocada dinamicamente contendo N linhas e N colunas. Essa matriz deve conter o valor 0 na diagonal principal, o valor 1 nos elementos acima da diagonal principal e o valor −1 nos elementos abaixo da diagonal principal.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Informe a quantidade de dimensoes da matriz: ");
    scanf("%d", &n);
    int **matriz = (int **)malloc(n * sizeof(int *));
    if (matriz == NULL) {
        printf("Erro na alocacao de memoria!\n");
        return 1;
    }
    for(int i=0;i<n;i++) {
        matriz[i] = (int *)malloc(n*sizeof(int));
        if (matriz[i]== NULL) {
            printf("Erro de alocacao de memoria na linha %d!\n", i);
            return 1;
        }
    }

    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            if (i == j) {
                matriz[i][j] = 0;
            } else if (i > j) {
                matriz[i][j] = -1;
            } else {
                matriz[i][j] = 1;
            }
        }
    }
    printf("\n");

    printf("A matriz alocada e:\n");
    for(int i=0;i<n;i++) {
        for(int j= 0;j<n;j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<n;i++) {
        free(matriz[i]);
    }
    free(matriz);
    return 0;
}