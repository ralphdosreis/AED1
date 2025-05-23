#ifndef FILA_H
#define FILA_H

#include <stdio.h>

typedef struct cliente
{
  int codigo;
  char nome[50];
  struct cliente *prox;
} Cliente;

typedef struct
{
  Cliente *inicio;
  Cliente *fim;
  int tamanho;
} Fila;

void inicializaFila(Fila *f);
void adicionaCliente(Fila *f, int codigo, const char *nome);
void chamaProximoCliente(Fila *f);
void listarClientes(Fila *f);
int quantidadeClientes(Fila *f);
int tempoMedioEspera(Fila *f);
void menu();

#endif