// Pilhas, Filas e Listas são comumente implementadas como estruturas de dados dinâmicas, pois permitem inserção e remoção de elementos após a criação da estrutura.
// Vetores e Matrizes, especialmente em linguagens como C, são estruturas estáticas, pois seu tamanho é fixado na criação e não pode ser alterado posteriormente.
// Estruturas de dados dinâmicas não exigem que seus elementos estejam alocados sequencialmente na memória, ao contrário das estruturas estáticas como vetores.
// Isso é vantajoso em situações em que não há espaço contíguo suficiente na memória, permitindo a alocação eficiente de muitos elementos em posições separadas.
// Pilha é um tipo de estrutura de dados, de tamanho variável, em que se estabelece a política LIFO (Last In, First Out) para a inserção e remoção de elementos nela(dela)
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
  int dia, mes, ano;
} Data;

typedef struct
{
  char nome[50];
  Data data;
} Pessoa;

typedef struct no
{
  Pessoa p;
  struct no *proximo;
} No;

Pessoa ler_pessoa()
{
  Pessoa p;
  printf("\n Digite o nome e a data de nascimento: \n");
  scanf("%49[^\n]%d%d%d", p.nome, &p.data.dia, &p.data.mes, &p.data.ano);
  return p;
}

void imprimir_pessoa(Pessoa p)
{
  printf("\nNome:%s\nData:%2d%2d%4d\n", p.nome, p.data.dia, p.data.mes, p.data.ano);
}

No *empilhar(No *topo)
{
  No *novo = malloc(sizeof(No));

  if (novo)
  {
    novo->p = ler_pessoa();
    novo->proximo = topo;
    return novo;
  }
  else
  {
    printf("\nErro na alocação\n");
  }
  return NULL;
}

int main()
{
  No *topo = NULL;
  int opcao;
  do
  {
    printf("\n0-sair, n1 = empilhar, n2 = desempilhar, n3 = imprimir\n");
    scanf("%d", &opcao);
    getchar();
    printf("\nopcao=%d", opcao);

    switch (opcao)
    {
    case 1:
      topo = empilhar(topo);
      break;
    case 2:
      break;
    case3:
      break;
    default:
      if (opcao != 0)
      {
        printf("\nopcao invalida\n");
      }
    }

  } while (opcao != 0);
  return 0;
}
