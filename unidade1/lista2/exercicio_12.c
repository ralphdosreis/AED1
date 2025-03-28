// Considere a seguinte declaração: int var, *ptr1, **ptr2, ***ptr3. Escreva um programa que leia a variável var e calcule e exiba o dobro, o triplo e o quádruplo desse valor utilizando apenas os ponteiros ptr1, ptr2 e ptr3. O ponteiro ptr1 deve ser usado para calcular o dobro, ptr2, o triplo, e ptr3, o quádruplo.
#include <stdio.h>

int main()
{
  int var;
  printf("Informe um valor para var: ");
  scanf("%d", &var);
  int *ptr1;
  int **ptr2;
  int ***ptr3;

  ptr1 = &var;
  ptr2 = &ptr1;
  ptr3 = &ptr2;

  printf("O dobro de var e: %d\n", *ptr1 * 2);
  printf("O triplo de var e: %d\n", **ptr2 * 3);
  printf("O quadruplo de var e: %d\n", ***ptr3 * 4);
  return 0;
}