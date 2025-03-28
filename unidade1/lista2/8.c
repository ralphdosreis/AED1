// Faça um programa que leia um valor inteiro N não negativo. Se o valor de N for inválido, o usuário deverá digitar outro até que ele seja válido (ou seja, positivo). Em seguida, leia um vetor V contendo N posições de inteiros, em que cada valor deverá ser maior ou igual a 2. Esse vetor deverá ser alocado dinamicamente.

#include <stdio.h>
#include <stdlib.h>

int leNumero()
{
  int n;
  printf("Informe um numero para tamanho do vetor: ");
  scanf("%d", &n);
  if (n < 0)
  {
    printf("Numero invalido!\n");
    return leNumero();
  }
  return n;
}

int maiorQueDois()
{
  int numero;
  printf("Informe um numero maior ou igual a dois: ");
  scanf("%d", &numero);
  if (numero < 2)
  {
    printf("Numero invalido!\n");
    return maiorQueDois();
  }
  return numero;
}

int main()
{
  int n = leNumero();
  int *vetor = (int *)malloc(n * sizeof(int));
  if (vetor == NULL)
  {
    printf("Erro de alocacao de memoria.\n");
    return 1;
  }
  for (int i = 0; i < n; i++)
  {
    vetor[i] = maiorQueDois();
  }
  printf("Valores armazenados no vetor: ");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", vetor[i]);
  }
  printf("\n");

  free(vetor);
  return 0;
}