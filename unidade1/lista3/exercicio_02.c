// Entrada: A única linha da entrada contém um número natural n, indicando a ordem máxima dos termos desejados da “Série de Fibonacci”. Sabe-se que 1 ≤ n ≤ 1000. Saída: Seu programa deve imprimir uma única linha contendo até o n-ésimo termo da série, sempre separados por um único espaço em branco.
#include <stdio.h>

unsigned long long fibonacci(int n)
{
  if (n == 0)
    return 0;
  if (n == 1)
    return 1;
  return fibonacci(n - 1) + fibonacci(n - 2);
}

void printFibonacciSeries(int n, int current)
{
  if (current >= n)
    return;

  printf("%llu", fibonacci(current));

  if (current < n - 1)
  {
    printf(" ");
  }

  printFibonacciSeries(n, current + 1);
}

int main()
{
  int n;
  printf("Informe um numero que indique a ordem maxima dos termos da Serie Fibonacci: ");
  scanf("%d", &n);

  printFibonacciSeries(n, 0);
  printf("\n");

  return 0;
}
