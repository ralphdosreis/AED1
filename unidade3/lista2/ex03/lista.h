#ifndef LISTA_H
#define LISTA_H

typedef struct produto {
    int codigo;
    char nomeProd[30];
    float preco;
    int qtd;
} Produto;

typedef struct no {
    Produto prod;
    struct no* proximo;
} No;

No *criaNo(Produto p);
void cadastrarProduto(No **lista, Produto p);
int removerProduto(No **lista, int codigo);
Produto *buscarMenorPreco(No *lista);
void listarProdutos(No *lista);

#endif