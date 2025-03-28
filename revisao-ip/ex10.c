#include <stdio.h>

#define MAX_FUNCIONARIOS 100

typedef struct {
    char nome[50];
    int qtd_funcionarios;
    int anos_existencia;
} Departamento;

typedef struct {
    char nome[100];
    int matricula;
    int anos_trabalhados;
    Departamento departamento;
} Funcionario;

int main() {
    int n;
    scanf("%d", &n);

    if (n > MAX_FUNCIONARIOS) {
        return 1;
    }

    Funcionario funcionarios[n];

    for (int i = 0; i < n; i++) {
        printf("\nDados do funcionário %d:\n", i + 1);
        printf("Nome: ");
        scanf(" %[^s]", funcionarios[i].nome);
        printf("Matrícula: ");
        scanf("%d", &funcionarios[i].matricula);
        printf("Anos trabalhados: ");
        scanf("%d", &funcionarios[i].anos_trabalhados);

        printf("\nDados do departamento:\n");
        printf("Nome do departamento: ");
        scanf(" %[^s]", funcionarios[i].departamento.nome);
        printf("Quantidade de funcionários no departamento: ");
        scanf("%d", &funcionarios[i].departamento.qtd_funcionarios);
        printf("Anos de existência do departamento: ");
        scanf("%d", &funcionarios[i].departamento.anos_existencia);
    }

    printf("\nListagem dos funcionários:\n");
    for (int i = 0; i < n; i++) {
        printf("\nFuncionário %d:\n", i + 1);
        printf("Nome: %s\n", funcionarios[i].nome);
        printf("Matrícula: %d\n", funcionarios[i].matricula);
        printf("Anos trabalhados: %d\n", funcionarios[i].anos_trabalhados);
        if (funcionarios[i].anos_trabalhados >= 30) {
            printf("* Já pode solicitar aposentadoria! *\n");
        }
        printf("Departamento: %s\n", funcionarios[i].departamento.nome);
        printf("Quantidade de funcionarios no departamento: %d\n", funcionarios[i].departamento.qtd_funcionarios);
        printf("Anos de existencia do departamento: %d\n", funcionarios[i].departamento.anos_existencia);
    }

    return 0;
}
