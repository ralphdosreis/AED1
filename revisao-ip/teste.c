// #include <stdio.h>

// int main() {
//   char letra = 'a';
//   char *ptrChar = &letra;
//   char **ptrPtrChar = &ptrChar;
//   char ***ptrPtr = &ptrPtrChar;

//   printf("%p\n", ptrPtr);
//   printf("%p\n", *ptrPtr);
//   printf("%p\n", **ptrPtr);
//   printf("%p", ***ptrPtr);
// }

/* Alocação dinâmica */

// #include <stdio.h>
// #include <stdlib.h>

// struct ponto
// {
//   int x, y;
// };

// int main()
// {
//   printf("Tamanho char: %d em bytes\n", sizeof(char));
//   printf("Tamanho int: %d em bytes\n", sizeof(int));
//   printf("Tamanho float: %d em bytes\n", sizeof(float));
//   printf("Tamanho double: %d em bytes\n", sizeof(double));
//   printf("Tamanho ponto: %d em bytes\n", sizeof(struct ponto));
// }

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *p;
  p = (int *)malloc(5 * sizeof(int)); // malloc retorna um ponteiro NULL, um ponteiro genérico (void*)
  int i;
  for (i = 0; i < 5; i++)
  {
    printf("Digite o valor da posicao %d: ", i);
    scanf("%d", &p[i]);
  }
  return 0;
}