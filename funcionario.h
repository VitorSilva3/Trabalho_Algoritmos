#ifndef FUNCIONARIO_H_
#define FUNCIONARIO_H_
    #include "utils.h"

/*defines*/

#define TAMFUNCIONARIO 50

/*Enumerables*/


/*structures*/


typedef struct{
    int id;
    char nome[50];
    char genero;
    char tipo[50];
    int idade;
    float vencimento;
    int idClinica;
}Funcionario;

/*functions/procedure declaration*/
void criarFuncionario(Funcionario *funcionario, int n);
void quantFuncionario(Funcionario *funcionario, int n);
void mediaIdadesFuncionario(Funcionario *funcionario, int n);

#endif