// Crie um vetor de registros de funcionários e informe os dados via teclado. Um funcionário possui nome, cargo, salário-base, CPF e departamento. Em seguida, calcule e exiba o salário médio de todos os funcionários. No cálculo de cada salário considere os seguintes adicionais, a partir do salário-base, por cargo: Assistente (5%), Supervisor (10%), Gerente(15%), Outras categorias (2%). Obs.: salário-base contempla somente o valor registrado em carteira/tabela de remuneração.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
  char nome[50];
  char cargo[50];
  float salarioBase;
  int cpf;
  char departamento[50];
} Funcionario;

float calculaSalario(const char *cargo, float salario)
{
  if (strcmp(cargo, "Assistente") == 0)
  {
    return salario * 1.05;
  }
  else if (strcmp(cargo, "Supervisor") == 0)
  {
    return salario * 1.1;
  }
  else if (strcmp(cargo, "Gerente") == 0)
  {
    return salario * 1.15;
  }
  else
  {
    return salario * 1.02;
  }
}

int main()
{
  int quantidade;
  printf("Qual e a quantidade de funcionarios? ");
  scanf("%d", &quantidade);
  getchar();

  Funcionario *funcionarios = (Funcionario *)malloc(quantidade * sizeof(Funcionario));
  if (funcionarios == NULL)
  {
    printf("Erro na alocacao de memoria!\n");
    return 1;
  }

  float somaSalarios = 0;
  for (int i = 0; i < quantidade; i++)
  {
    printf("\nFuncionario %d:\n", i + 1);
    printf("Informe o nome do funcionario: ");
    scanf(" %[^\n]", funcionarios[i].nome);
    printf("Informe o cargo do funcionario: ");
    scanf(" %[^\n]", funcionarios[i].cargo);
    printf("Informe o salario base do funcionario: ");
    scanf("%f", &funcionarios[i].salarioBase);
    printf("Informe o CPF do funcionario: ");
    scanf("%d", &funcionarios[i].cpf);
    printf("Informe o departamento do funcionario: ");
    scanf(" %[^\n]", funcionarios[i].departamento);

    float salarioFinal = calculaSalario(funcionarios[i].cargo, funcionarios[i].salarioBase);
    somaSalarios += salarioFinal;
  }

  printf("\nSalario medio dos funcionarios: %.2f\n", somaSalarios / quantidade);

  free(funcionarios);

  return 0;
}