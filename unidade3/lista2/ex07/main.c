#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fila.h"

int main()
{
  Fila fila;
  inicializaFila(&fila);

  int opcao, codigo;
  char nome[50];

  do
  {
    menu();
    scanf("%d", &opcao);
    getchar();

    switch (opcao)
    {
    case 1:
      printf("Digite o codigo do cliente: ");
      scanf("%d", &codigo);
      getchar();
      printf("Digite o nome do cliente: ");
      fgets(nome, sizeof(nome), stdin);
      nome[strcspn(nome, "\n")] = '\0';
      adicionaCliente(&fila, codigo, nome);
      break;

    case 2:
      chamaProximoCliente(&fila);
      break;

    case 3:
      listarClientes(&fila);
      break;

    case 4:
      printf("Total de clientes na fila: %d\n", quantidadeClientes(&fila));
      break;

    case 5:
      printf("Tempo medio de espera: %d minutos\n", tempoMedioEspera(&fila));
      break;

    case 0:
      printf("Saindo do programa...\n");
      break;

    default:
      printf("Opcao invalida.\n");
    }

  } while (opcao != 0);

  while (fila.inicio != NULL)
  {
    chamaProximoCliente(&fila);
  }

  return 0;
}