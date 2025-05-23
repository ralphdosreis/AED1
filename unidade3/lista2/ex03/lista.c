#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

No *criaNo(Produto p)
{
  No *novo = (No *)malloc(sizeof(No));
  if (novo != NULL)
  {
    novo->prod = p;
    novo->proximo = NULL;
  }
  return novo;
}

void cadastrarProduto(No **lista, Produto p)
{
  No *novo = criaNo(p);
  if (novo != NULL)
  {
    novo->proximo = *lista;
    *lista = novo;
    printf("Produto cadastrado com sucesso!\n");
  }
}

int removerProduto(No **lista, int codigo)
{
  No *atual = *lista;
  No *anterior = NULL;

  while (atual != NULL)
  {
    if (atual->prod.codigo == codigo)
    {
      if (anterior == NULL)
        *lista = atual->proximo;
      else
        anterior->proximo = atual->proximo;

      free(atual);
      return 1; // Remoção bem-sucedida
    }
    anterior = atual;
    atual = atual->proximo;
  }
  return 0; // Produto não encontrado
}

Produto *buscarMenorPreco(No *lista)
{
  if (lista == NULL)
    return NULL;

  No *atual = lista;
  No *menor = lista;

  while (atual != NULL)
  {
    if (atual->prod.preco < menor->prod.preco)
    {
      menor = atual;
    }
    atual = atual->proximo;
  }
  return &menor->prod;
}

void listarProdutos(No *lista)
{
  if (lista == NULL)
  {
    printf("Lista de produtos vazia.\n");
    return;
  }

  No *atual = lista;
  while (atual != NULL)
  {
    Produto p = atual->prod;
    printf("Codigo: %d | Nome: %s | Preco: R$%.2f | Estoque: %d\n",
           p.codigo, p.nomeProd, p.preco, p.qtd);
    atual = atual->proximo;
  }
}
