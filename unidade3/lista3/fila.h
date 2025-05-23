#ifndef FILA_PRIORIDADE_H
#define FILA_PRIORIDADE_H

#define MAX 100
#define SUCESSO 1
#define FALHA 0

typedef struct
{
  int dados[MAX];
  int tamanho;
} FilaPrioridade;

void inicializa(FilaPrioridade *f);
int inserir(FilaPrioridade *f, int valor);
int remover(FilaPrioridade *f, int *removido);
void exibir(FilaPrioridade *f);

#endif
