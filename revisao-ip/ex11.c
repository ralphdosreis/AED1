#include <stdio.h>
#include <stdlib.h>

int main()
{
  int M;
  printf("Informe o tamanho da matriz triangular: ");
  scanf("%d\n", &M);

  int **matriz = (int **)malloc(M * sizeof(int *));
  for (int i = 0; i < M; i++)
  {
    matriz[i] = (int *)malloc((i + 1) * sizeof(int));
  }

  printf("Preencha a matriz:\n");
  for (int i = 0; i < M; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      printf("Elemento [%d][%d]: ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }

  printf("\nMatriz original:\n");
  for (int i = 0; i < M; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }

  printf("\nMatriz quintuplicada:\n");
  for (int i = 0; i < M; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      printf("%d ", matriz[i][j] * 5);
    }
    printf("\n");
  }

  for (int i = 0; i < M; i++)
  {
    free(matriz[i]);
  }
  free(matriz);

  return 0;
}
