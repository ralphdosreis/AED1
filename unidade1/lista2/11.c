// Crie um programa que contenha um array de inteiros contendo cinco elementos (pode ser definido na inicialização ou preenchido pelo usuário). Modifique os valores do vetor usando aritmética de ponteiros.
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int tamanhoVetor;
  printf("Informe o tamanho do vetor: ");
  scanf("%d", &tamanhoVetor);
  int *ptr = (int *)malloc(tamanhoVetor * sizeof(int));
  if (ptr == NULL)
  {
    printf("Erro de alocacao de memoria.\n");
    return 1;
  }
  for (int i = 0; i < tamanhoVetor; i++)
  {
    printf("Informe o numero para posicao %d: ", i);
    scanf("%d", (ptr + i));
  }
  printf("O vetor original informado foi: ");
  for (int i = 0; i < tamanhoVetor; i++)
  {
    printf("%d ", *(ptr + i));
  }
  printf("\n");
  for (int i = 0; i < tamanhoVetor; i++)
  {
    printf("Informe um novo valor para a posicao %d do vetor: ", i);
    scanf("%d", (ptr + i));
  }
  printf("O vetor alterado informado foi: ");
  for (int i = 0; i < tamanhoVetor; i++)
  {
    printf("%d ", *(ptr + i));
  }
  printf("\n");
  free(ptr);

  return 0;
}