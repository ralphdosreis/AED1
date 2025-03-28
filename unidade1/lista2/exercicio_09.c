// Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba o maior endereço.

#include <stdio.h>

int main()
{
  int n1, n2;
  int *ptr1 = &n1;
  int *ptr2 = &n2;
  printf("O endereco de n1 e: %p\n", ptr1);
  printf("O endereco de n2 e: %p\n", ptr2);

  if (ptr1 > ptr2)
  {
    printf("O maior endereco e: %p\n", ptr1);
  }
  else
  {
    printf("O maior endereco e: %p\n", ptr2);
  }
  return 0;
}