// Crie uma matriz triangular dinamicamente alocada, cujo primeiro elemento da matriz deve ser um valor que o usuário inseriu via teclado. A partir do segundo elemento da matriz até o final, realize um preenchimento automático no qual o valor de cada célula é o dobro da célula anterior.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Informe o valor de dimensoes da matriz triangular: ");
    scanf("%d", &n);
    int **matriz = (int **)malloc(n*sizeof(int *));
    if (matriz == NULL) {
        printf("Erro na alocacao de memoria!\n");
        return 1;
    }

    for (int i=0;i<n;i++) {
        matriz[i] = (int *)malloc((i+1)*sizeof(int));
        if (matriz[i] == NULL) {
            printf("Erro na alocacao de memoria da linha %d!\n", i);
            for(int j=0;j<i;j++) {
                free(matriz[j]);
            }
            free(matriz);
            return 1;
        }
    }

    int primeiroValor;
    printf("Informe o primeiro valor da matriz: ");
    scanf("%d", &primeiroValor);

    int valor = primeiroValor;
    for(int i = 0;i<n;i++) {
        for(int j=0;j<=i;j++) {
            matriz[i][j] = valor;
            valor*=2;
        }
    }
    printf("\n");

    printf("Os valores da matriz alocada sao:\n");
    for(int i=0;i<n;i++) {
        for(int j=0;j<=i;j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for(int i= 0;i<n;i++) {
        free(matriz[i]);
    }
    free(matriz);
    return 0;
}