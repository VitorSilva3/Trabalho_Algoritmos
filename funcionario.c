#include <stdio.h>
#include <string.h>
#include "funcionario.h"

void criarFuncionario(Funcionario *funcionario, int n){

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