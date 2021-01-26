#ifndef FUNCIONARIO_H_
#define FUNCIONARIO_H_

/*defines*/
#include "clinicas.h"
#define TAMFUNCIONARIO 50

/*Enumerables*/


/*structures*/


typedef struct{
    int id;
    char nome[50];
    char genero;
    int idade;
    float vencimento;
    int idClinica;
    char tipoFuncionario[15];
}Funcionario;

/*functions/procedure declaration*/
void criarfuncionario(Funcionario *funcionario, Clinicas *clinica, int n);


#endif