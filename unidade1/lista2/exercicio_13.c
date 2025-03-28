// Escreva um programa que aloque dinamicamente uma matriz de inteiros de dimensão N. Solicite ao usuário que insira os valores para a matriz, contudo antes de cada inserção, o código deve verificar se o número inserido é par, caso seja, a célula é preenchida. Caso contrário, o valor 0 (zero) é atribuído à célula em questão.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int dimensoes;
    printf("Informe quantas dimensoes a matriz tera: ");
    scanf("%d", &dimensoes);
    int **matriz = (int **)malloc(dimensoes * sizeof(int *));
    if (matriz == NULL) {
        printf("Erro na alocacao de memoria\n");
        return 1;
    }
    for (int i=0;i<dimensoes;i++) {
        matriz[i] = (int *)malloc(dimensoes * sizeof(int));
        if (matriz[i] == NULL) {
            printf("Erro na alocacao de memoria da linha %d!\n", i);
            return 1;
        }
    }

    for(int i=0;i<dimensoes;i++) {
        for (int j=0;j<dimensoes;j++) {
            int valor;
            printf("Digite o valor para a posicao [%d][%d]: ", i, j);
            scanf("%d", &valor);

            if (valor % 2 == 0) {
                matriz[i][j] = valor;
            } else {
                matriz[i][j] = 0;
            }
        }
    }
    printf("\n");

    printf("Os valores alocados na matriz sao:\n");
    for (int i=0;i<dimensoes;i++) {
        for (int j = 0;j<dimensoes;j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for (int i= 0;i<dimensoes;i++) {
        free(matriz[i]);
    }
    free(matriz);
    return 0;
}