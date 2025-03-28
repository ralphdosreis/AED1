// Entrada: A única linha da entrada contém um único natural n, indicando que se deseja imprimir os n primeiros números naturais, sendo que n ∈ N∗ e n ≤ 5000. Saída: Seu programa deve imprimir uma única linha, contendo os n primeiros números naturais separados por um único espaço em branco entre eles.

#include <stdio.h>

int leNumero()
{
  int n;
  printf("Informe outro numero: ");
  scanf("%d", &n);
  if (n > 5000 || n <= 0)
  {
    printf("Numero invalido!\n");
    return leNumero();
  }
  return n;
}

void contagem(int n)
{
  if (n == 0)
    return;
  contagem(n - 1);
  printf("%d ", n);
}

int main()
{
  int n;
  printf("Informe um numero ate onde a contagem sera realizada: ");
  scanf("%d", &n);
  if (n > 5000 || n <= 0)
  {
    printf("Numero invalido!\n");
    n = leNumero();
  }
  contagem(n);
  return 0;
}