// #include <stdio.h>

// void contagemRegressiva(int n);

// int main() {
//   int n = 5;
//   contagemRegressiva(n);
//   return 0;
// }

// void contagemRegressiva(int n) {
//   if (n>=1) {
//     printf("Valor: %d\n", n);
//     contagemRegressiva(n-1);
//   }
// }

#include <stdio.h>

int fatorial(int n)
{
  if (n == 0)
  {
    return 1;
  }
  else
  {
    printf("%d", n);
    return n * fatorial(n - 1);
  }
}

int main()
{
  int x;
  x = fatorial(4);
  printf("4! = %d", x);
  return 0;
}