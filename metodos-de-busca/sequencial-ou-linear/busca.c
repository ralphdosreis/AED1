#include <stdio.h>

int buscaSequencial(int *vet, int tam, int elem)
{
  int i;
  for (i = 0; i < tam; i++)
  {
    if (elem == vet[i])
    {
      return vet[i];
    }
  }
  return -1;
}

int main()
{
  int vet[7] = {23, 4, 67, -8, 54, 90, 21};
  int valor = buscaSequencial(vet, 7, 54);
  printf("%d\n", valor);
  return 0;
}

// Considerando um vetor com N elementos:
// Melhor caso: O(1)
// Pior caso: O(n)
// Caso médio: O(n/2)