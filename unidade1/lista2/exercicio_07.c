// Elabore um programa que leia do usuário o tamanho de um vetor a ser lido. Em seguida, faça a alocação dinâmica desse vetor. Por fim, leia o vetor do usuário e o imprima.

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int tamanhoVetor;
  printf("Informe o tamanho do vetor: ");
  scanf("%d", &tamanhoVetor);
  int *vetor = (int *)malloc(tamanhoVetor * sizeof(int));
  printf("Informe os %d numeros:\n", tamanhoVetor);
  for (int i = 0; i < tamanhoVetor; i++)
  {
    scanf("%d", &vetor[i]);
  }

  printf("O vetor informado foi:");
  for (int j = 0; j < tamanhoVetor; j++)
  {
    printf(" %d", vetor[j]);
  }
  free(vetor);
  return 0;
}
