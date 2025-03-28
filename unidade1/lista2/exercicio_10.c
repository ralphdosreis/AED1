// Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do teclado. Em seguida, compare seus endereços e exiba o conteúdo do maior endereço.

#include <stdio.h>

int main()
{
  int n1, n2;
  printf("Informe o valor para n1: ");
  scanf("%d", &n1);
  printf("Informe o valor para n2: ");
  scanf("%d", &n2);
  int *ptr1 = &n1;
  int *ptr2 = &n2;
  printf("O endereco de n1 e: %p\n", ptr1);
  printf("O endereco de n2 e: %p\n", ptr2);
  if (ptr1 > ptr2)
  {
    printf("O maior endereco e: %p, e seu conteudo e: %d\n", ptr1, *ptr1);
  }
  else
  {
    printf("O maior endereco e: %p, e seu conteudo e: %d\n", ptr2, *ptr2);
  }
  return 0;
}