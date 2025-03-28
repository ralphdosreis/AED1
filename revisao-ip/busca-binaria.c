#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *p, tamanho;
  printf("Informe o tamanho do Array: ");
  scanf("%d", &tamanho);
  p = (int *)malloc(tamanho * sizeof(int));
  if (p == NULL)
  {
    printf("Erro: Memoria insuficiente!\n");
    exit(1);
  }
  for (int i = 0; i < tamanho; i++)
  {
    printf("Informe o valor da posicao %d: ", i);
    scanf("%d", &p[i]);
  }

  printf("\n");
  int numeroProcurado;
  printf("Informe um numero a ser procurado na Array informada: ");
  scanf("%d", &numeroProcurado);
  printf("\n");

  for (int j = 0; j < tamanho; j++)
  {
    if (p[j] == numeroProcurado)
    {
      printf("O indice do numero informado para ser procurado na Array informada e: %d", j);
    }
  }

  free(p);
  return 0;
}