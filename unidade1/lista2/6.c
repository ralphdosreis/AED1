// Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura deve conter o número de matrícula do aluno, seu nome e as notas de três provas. Escreva um programa que mostre o tamanho em byte dessa estrutura.

#include <stdio.h>

typedef struct
{
  int matricula;
  char nome[50];
  float p1, p2, p3;
} Aluno;

int main()
{
  printf("O valor em bytes da estrutura e: %d\n", sizeof(Aluno));
  return 0;
}