#include <stdio.h>
#include <string.h>
#include "funcionario.h"

void criarFuncionario(Funcionario *funcionario, Clinicas *clinica, int n){

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