#include <stdio.h>
#include <string.h>
#include "funcionario.h"

void criarFuncionario(Funcionario *funcionario, Clinicas *clinica, int n){

    printf("Tipo de Funcionário: ");
    fgets(funcionario->tipo, 50, stdin);
    funcionario->tipo[strlen(funcionario->tipo) - 1] = 0;

    printf("Nome: ");
    fgets(funcionario->nome, 50, stdin);
    funcionario->nome[strlen(funcionario->nome) - 1] = 0;

    printf("Genero (F/M): ");
    scanf("%c", &funcionario->genero);

    printf("Idade: ");
    scanf("%d", &funcionario->idade);

    printf("Vencimento: ");
    scanf("%f", &funcionario->vencimento);

    printf("Clínica pertencente: ");
    scanf("%d", &funcionario->idClinica);

    if (clinica->id != funcionario->idClinica)
    {
        puts("Clinica indisponivel");
        printf("Clínica pertencente: ");
        scanf("%d", &funcionario->idClinica);
    }
    
    puts("Tipos de funcionários: Médico, Enfermeiro e Auxiliar");
    printf("Tipo de Funcionario: ");
    scanf("%c", &funcionario->tipoFuncionario);

    funcionario->id = n + 1;
}

void quantFuncionario(Funcionario *funcionarios, int n){

    int contM = 0, contE = 0, contA = 0; //

    for (int i = 0; i < n; i++)
    {
       if(funcionarios[i].tipo == "Médico" || funcionarios[i].tipo == "médico")
        {
            contM = contM + 1;

        }

        if(funcionarios[i].tipo == "Enfermeiro" || funcionarios[i].tipo == "enfermeiro")
        {
            contE = contE + 1;

        }

        if(funcionarios[i].tipo == "Auxiliar" || funcionarios[i].tipo == "auxiliar")
        {
            contA = contA + 1;
        } 
    }
}

void mediaIdadesFuncionario(Funcionario *funcionarios, int n, int contM, int contE, int contA){

    int somaIdadesM = 0, somaIdadesE = 0, somaIdadesA = 0;
    float mediaIdadesM = 0, mediaIdadesE = 0, mediaIdadesA = 0;

    quantFuncionario(funcionarios,n);

    for(int i; i < n, i++)
    {    
        if(funcionarios[i].tipo == "Médico" || funcionarios[i].tipo == "médico")
        {
            somaIdadesM = somaIdadesM + funcionarios[i].idade;
            mediaIdadesM = somaIdadesM / contM;

        }

        if(funcionarios[i].tipo == "Enfermeiro" || funcionarios[i].tipo == "enfermeiro")
        {
            somaIdadesE = somaIdadesE + funcionarios[i].idade;
            mediaIdadesE = somaIdadesE / contE;

        }

        if(funcionarios[i].tipo == "Auxiliar" || funcionarios[i].tipo == "auxiliar")
        {
            somaIdadesA = somaIdadesA + funcionarios[i].idade;
            mediaIdadesA = somaIdadesA / contA;
        }
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