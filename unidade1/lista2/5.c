// Escreva um programa que mostre o tamanho em byte que cada tipo de dados ocupa na memória: char, int, float, double.
#include <stdio.h>

int main()
{
  printf("Valor em bytes do tipo char: %d\n", sizeof(char));
  printf("Valor em bytes do tipo int: %d\n", sizeof(int));
  printf("Valor em bytes do tipo float: %d\n", sizeof(float));
  printf("Valor em bytes do tipo double: %d\n", sizeof(double));
  return 0;
}