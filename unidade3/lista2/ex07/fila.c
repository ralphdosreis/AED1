#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fila.h"

void inicializaFila(Fila *f) {
    f->inicio = NULL;
    f->fim = NULL;
    f->tamanho = 0;
}


void adicionaCliente(Fila *f, int codigo, const char *nome) {
    Cliente *novo = (Cliente *)malloc(sizeof(Cliente));
    if (novo == NULL) {
        printf("Erro de alocacao de memoria!\n");
        return;
    }
    novo->codigo = codigo;
    strcpy(novo->nome, nome);
    novo->prox = NULL;

    if (f->fim == NULL) { // fila vazia
        f->inicio = novo;
    } else {
        f->fim->prox = novo;
    }
    f->fim = novo;
    f->tamanho++;
    printf("Cliente %s (codigo %d) adicionado à fila.\n", nome, codigo);
}

void chamaProximoCliente(Fila *f) {
    if (f->inicio == NULL) {
        printf("Fila vazia. Nenhum cliente a ser atendido.\n");
        return;
    }
    Cliente *remover = f->inicio;
    printf("Chamando cliente com codigo %d: %s\n", remover->codigo, remover->nome);
    f->inicio = remover->prox;
    if (f->inicio == NULL) {
        f->fim = NULL;
    }
    free(remover);
    f->tamanho--;
}

void listarClientes(Fila *f) {
    if (f->inicio == NULL) {
        printf("Fila vazia.\n");
        return;
    }
    Cliente *atual = f->inicio;
    printf("Clientes na fila:\n");
    while (atual != NULL) {
        printf("Codigo: %d | Nome: %s\n", atual->codigo, atual->nome);
        atual = atual->prox;
    }
}

int quantidadeClientes(Fila *f) {
    return f->tamanho;
}

int tempoMedioEspera(Fila *f) {
    return f->tamanho * 10;
}

void menu() {
    printf("\n------ MENU BANCO ------\n");
    printf("1. Adicionar cliente\n");
    printf("2. Chamar proximo cliente\n");
    printf("3. Listar clientes\n");
    printf("4. Quantidade de clientes\n");
    printf("5. Tempo medio de espera\n");
    printf("0. Sair\n");
    printf("Escolha uma opcao: ");
}
