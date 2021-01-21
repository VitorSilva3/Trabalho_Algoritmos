#include <stdio.h>
#include <string.h>
#include "funcionario.h"

void criarFuncionario(Funcionario *funcionario, int n){

    printf("Tipo de Funcionário: ");
    fgets(funcionario->tipo, 50, stdin);
    funcionario->tipo[strlen(funcionario->tipo) - 1] = 0;

    printf("Nome: ");
    fgets(funcionario->nome, 50, stdin);
    funcionario->nome[strlen(funcionario->nome) - 1] = 0;

    printf("Genero (F/M): ");
    scanf("%c", &funcionario->genero);

    printf("Idade: ");
    scanf("%c", &funcionario->idade);

    printf("Vencimento: ");
    scanf("%f", &funcionario->vencimento);

    funcionario->id = n + 1;
}

void quantFuncionario(Funcionario *funcionario, int n){

    
}

void mediaIdadesFuncionario(Funcionario *funcionario, int n){

    
}

void listarMedicosVenci(Funcionario *funcionario, int n){

    printf("ID | NOME | Vencimento\n");

    for (int i = 0; i < n; i++)
    {
        if (funcionario[i].tipo == "Medico")
        {
            printf("%d |", funcionario[i].id);
            printf(" %s |", funcionario[i].nome);
            printf(" %f |", funcionario[i].vencimento);
        }
    }
}