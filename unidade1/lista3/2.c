// Entrada: A única linha da entrada contém um número natural n, indicando a ordem máxima dos termos desejados da “Série de Fibonacci”. Sabe-se que 1 ≤ n ≤ 1000. Saída: Seu programa deve imprimir uma única linha contendo até o n-ésimo termo da série, sempre separados por um único espaço em branco.
#include <stdio.h>

int leNumero()
{
  int n;
  printf("Informe outro numero: ");
  scanf("%d", &n);
  if (n < 1 || n > 1000)
  {
    printf("Numero invalido!\n");
    return leNumero();
  }
  return n;
}

void fibonacci(int n)
{
  if (n == 0)
    return;
  fibonacci(n - 1 + n - 2);
  printf("%d ", n);
}

int main()
{
  int n;
  printf("Informe um numero para ordem maxima da sequencia Fibonacci: ");
  scanf("%d", &n);
  if (n < 1 || n > 1000)
  {
    printf("Numero invalido!\n");
    n = leNumero();
  }
  fibonacci(n);
  return 0;
}
