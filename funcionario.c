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

void quantFuncionario(Funcionario *funcionarios, int n){

    int contM = 0, contE = 0, contA = 0; //

    if(funcionarios->tipo == "Médico" || funcionarios->tipo == "médico")
    {
        contM = contM + 1;

    }

    if(funcionarios->tipo == "Enfermeiro" || funcionarios->tipo == "enfermeiro")
    {
        contE = contE + 1;

    }

    if(funcionarios->tipo == "Auxiliar" || funcionarios->tipo == "auxiliar")
    {
        contA = contA + 1;
    }
    
}

void mediaIdadesFuncionario(Funcionario *funcionarios, int n, int contM, int contE, int contA){

    int somaIdadesM = 0, somaIdadesE = 0, somaIdadesA = 0;
    float mediaIdadesM = 0, mediaIdadesE = 0, mediaIdadesA = 0;

    quantFuncionario(funcionarios,n);

    if(funcionarios->tipo == "Médico" || funcionarios->tipo == "médico")
    {
        somaIdadesM = somaIdadesM + funcionarios->idade;
        mediaIdadesM = somaIdadesM / contM;

    }

    if(funcionarios->tipo == "Enfermeiro" || funcionarios->tipo == "enfermeiro")
    {
        somaIdadesE = somaIdadesE + funcionarios->idade;
        mediaIdadesE = somaIdadesE / contE;

    }

    if(funcionarios->tipo == "Auxiliar" || funcionarios->tipo == "auxiliar")
    {
        somaIdadesA = somaIdadesA + funcionarios->idade;
        mediaIdadesA = somaIdadesA / contA;
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