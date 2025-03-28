// Implemente um programa que receba o nome completo, a idade e o endereço (logradouro,
//   número, bairro, complemento, CEP, cidade e estado) de uma pessoa e armazene esses dados
//   em uma estrutura. Em seguida, imprima na tela os dados da estrutura lida. Idade inferior a zero ou maior que 120 não devem ser aceitas.

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
  char logradouro[50];
  int numero;
  char bairro[50];
  char complemento[50];
  int cep;
  char cidade[50];
  char estado[50];
} Endereco;

typedef struct
{
  char nome[50];
  int idade;
  Endereco endereco;
} Dados;

int obterIdade()
{
  int idade;
  printf("Informe sua idade: ");

  if (scanf("%d", &idade) != 1 || idade < 0 || idade > 120)
  {
    printf("Idade invalida! Informe uma idade valida.\n");
    return obterIdade();
  }
  return idade;
}

int main()
{
  Dados dado;
  printf("Informe o seu nome: ");
  scanf(" %[^\n]", &dado.nome);
  dado.idade = obterIdade();
  printf("Informe o logradouro: ");
  scanf(" %[^\n]", &dado.endereco.logradouro);
  printf("Informe o numero: ");
  scanf("%d", &dado.endereco.numero);
  printf("Informe o bairro: ");
  scanf(" %[^\n]", &dado.endereco.bairro);
  printf("Informe o complemento: ");
  scanf(" %[^\n]", &dado.endereco.complemento);
  printf("Informe o CEP: ");
  scanf("%d", &dado.endereco.cep);
  printf("Informe a cidade: ");
  scanf(" %[^\n]", &dado.endereco.cidade);
  printf("Informe o estado: ");
  scanf(" %[^\n]", &dado.endereco.estado);
  printf("\n\n");

  printf("Dados informados pelo usuario:\n");
  printf("Nome: %s\n", dado.nome);
  printf("Idade: %d\n", dado.idade);
  printf("Logradouro: %s\n", dado.endereco.logradouro);
  printf("Numero: %d\n", dado.endereco.numero);
  printf("Bairro: %s\n", dado.endereco.bairro);
  printf("Complemento: %s\n", dado.endereco.complemento);
  printf("CEP: %d\n", dado.endereco.cep);
  printf("Cidade: %s\n", dado.endereco.cidade);
  printf("Estado: %s\n", dado.endereco.estado);
  return 0;
}