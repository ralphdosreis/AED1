#ifndef LISTA_NUMEROS_H
#define LISTA_NUMEROS_H

#define SUCESSO 1
#define FALHA -1
#define CHAVE_INVALIDA 0

#define TAMANHO_MAXIMO_LISTA 100

typedef struct
{
  int chave;
  int valor;
} Numero;

typedef struct
{
  Numero numeros[TAMANHO_MAXIMO_LISTA];
  int tamanho;
} Lista;

int criaListaVazia(Lista *lista);
int inicializaLista(Lista *lista, Numero numero);
int tamanhoLista(Lista *lista);
int listaVazia(Lista *lista);
int listaCheia(Lista *lista);
int insereInicio(Lista *lista, Numero numero);
int insereMeio(Lista *lista, int posicao, Numero elemento);
int insereFinal(Lista *lista, Numero numero);
int removeInicio(Lista *lista);
int removeMeio(Lista *lista, int posicao);
int removeFinal(Lista *lista);
int consultaListaValor(Lista *lista, int valor, Numero *numero);
int consultaListaIndice(Lista *lista, int indice, Numero *numero);
void imprimeLista(Lista *lista);

#endif