#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista.h"

int main()
{
  No *lista = NULL;
  int opcao, codigo;
  Produto p;

  do
  {
    printf("\n1. Cadastrar produto\n2. Remover produto\n3. Buscar produto de menor preco\n4. Listar produtos\n0. Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);
    getchar();

    switch (opcao)
    {
    case 1:
      printf("Codigo: ");
      scanf("%d", &p.codigo);
      getchar();
      printf("Nome: ");
      fgets(p.nomeProd, sizeof(p.nomeProd), stdin);
      p.nomeProd[strcspn(p.nomeProd, "\n")] = '\0';
      printf("Preco: ");
      scanf("%f", &p.preco);
      printf("Quantidade: ");
      scanf("%d", &p.qtd);
      cadastrarProduto(&lista, p);
      break;

    case 2:
      printf("Codigo do produto a remover: ");
      scanf("%d", &codigo);
      if (removerProduto(&lista, codigo))
        printf("Produto removido com sucesso.\n");
      else
        printf("Produto nao encontrado.\n");
      break;

    case 3:
    {
      Produto *menor = buscarMenorPreco(lista);
      if (menor != NULL)
        printf("Menor preco: %s - R$%.2f\n", menor->nomeProd, menor->preco);
      else
        printf("Lista vazia.\n");
      break;
    }

    case 4:
      listarProdutos(lista);
      break;

    case 0:
      printf("Saindo...\n");
      break;

    default:
      printf("Opcao invalida.\n");
    }
  } while (opcao != 0);

  // Libera memória
  No *aux;
  while (lista != NULL)
  {
    aux = lista;
    lista = lista->proximo;
    free(aux);
  }

  return 0;
}