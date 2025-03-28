// Crie uma estrutura para representar as coordenadas de um ponto no plano cartesiano (posições X e Y). Em seguida, declare e leia do teclado um ponto e exiba a distância dele até a origem das coordenadas, isto é, a posição (0,0).

#include <stdio.h>
#include <math.h>

typedef struct
{
  int x, y;
} Ponto;

int main()
{
  Ponto ponto;
  printf("Informe a coordenada x do ponto: ");
  scanf("%d", &ponto.x);
  printf("Informe a coordenada y do ponto: ");
  scanf("%d", &ponto.y);
  float dAO = sqrt(pow((ponto.x - 0), 2) + pow((ponto.y - 0), 2));
  printf("A distancia do ponto informado a origem e: %f\n", dAO);
  return 0;
}