#include <stdio.h>

void decimalToBinary(unsigned long long n)
{
  if (n > 1)
  {
    decimalToBinary(n / 2);
  }
  printf("%llu", n % 2);
}

int main()
{
  int k;
  printf("Informe um numero para a quantidade de casos de teste: ");
  scanf("%d", &k);

  for (int i = 0; i < k; i++)
  {
    unsigned long long n;
    scanf("%llu", &n);
    decimalToBinary(n);
    printf("\n");
  }

  return 0;
}
