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

    int contM = 0, contE = 0, contA = 0; //

    if(funcionario->tipo == "Médico" || funcionario->tipo == "médico")
    {
        contM = contM + 1;

    }

    if(funcionario->tipo == "Enfermeiro" || funcionario->tipo == "enfermeiro")
    {
        contE = contE + 1;

    }

    if(funcionario->tipo == "Auxiliar" || funcionario->tipo == "auxiliar")
    {
        contA = contA + 1;
    }
    
}

void mediaIdadesFuncionario(Funcionario *funcionario, int n){

    int somaIdadesM = 0, somaIdadesE = 0, somaIdadesA = 0;

    if(funcionario->tipo == "Médico" || funcionario->tipo == "médico")
    {
        somaIdadesM = somaIdadesM + funcionario->idade;

    }

    if(funcionario->tipo == "Enfermeiro" || funcionario->tipo == "enfermeiro")
    {
        somaIdadesE = somaIdadesE + funcionario->idade;

    }

    if(funcionario->tipo == "Auxiliar" || funcionario->tipo == "auxiliar")
    {
        somaIdadesA = somaIdadesA + funcionario->idade;

    }
}

void listarMedicosVenci(Funcionario *funcionario, int n, int somaVencim){

    printf("ID | NOME | Vencimento\n");

    for (int i = 0; i < n; i++)
    {
        if (funcionario[i].tipo == "Medico")
        {
            printf("%d |", funcionario[i].id);
            printf(" %s |", funcionario[i].nome);
            printf(" %f |", funcionario[i].vencimento);
        }

        somaVencim = somaVencim + funcionario[i].vencimento;
    }
}