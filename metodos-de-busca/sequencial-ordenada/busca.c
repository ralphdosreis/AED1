// Assumindo que os elementos estão ordenados
#include <stdio.h>

int buscaOrdenada(int *vet, int tam, int elem)
{
  int i;
  for (i = 0; i < tam; i++)
  {
    if (elem == vet[i])
    {
      return vet[i];
    }
    else
    {
      if (elem < vet[i])
      {
        return -1; // Encerra a busca. O elemento não existe no vetor, pois como os elementos estão ordenados, se o vet[i] não for igual ao elemento e for maior que elemento, então será maior, sendo assim o elemento não existe no vetor
      }
    }
  }
  return -1; // Elemento não encontrado
}

int main()
{
  int vet[7] = {-8, -4, 21, 23, 54, 67, 90};
  int valor = buscaOrdenada(vet, 7, 40);
  printf("%d\n", valor);
  return 0;
}