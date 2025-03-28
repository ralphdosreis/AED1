// Crie uma estrutura do tipo Ponto para representar as coordenadas de um ponto no plano
// cartesiano (posições A e B). Em seguida, declare e leia do teclado dois pontos e exiba a
// distância entre eles. Fórmula do cálculo da distância 𝑑𝐴𝐵 = (𝑥B– 𝑥𝐴)² + (𝑦𝐵 – 𝑦𝐴)²

#include <stdio.h>
#include <math.h>

typedef struct
{
  int x, y;
} PontoA;

typedef struct
{
  int x, y;
} PontoB;

int main()
{
  PontoA pontoA;
  PontoB pontoB;
  printf("Informe os pontos x e y do ponto A:\n");
  printf("Informe a coordenada x do ponto A: ");
  scanf("%d", &pontoA.x);
  printf("Informe a coordenada y do ponto A: ");
  scanf("%d", &pontoA.y);
  printf("Informe a coordenada x do ponto B: ");
  scanf("%d", &pontoB.x);
  printf("Informe a coordemada y do ponto B: ");
  scanf("%d", &pontoB.y);
  float dAB = sqrt(pow((pontoB.x - pontoA.x), 2) + pow((pontoB.y - pontoA.y), 2));
  printf("A distancia entre os pontos A e B e: %.2f", dAB);
  return 0;
}