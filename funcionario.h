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
    char tipo[50];
    char genero;
    int idade;
    float vencimento;
    int idClinica;
    char tipoFuncionario[15];
}Funcionario;

/*functions/procedure declaration*/
void criarFuncionario(Funcionario *funcionario, int n);
void quantFuncionario(Funcionario *funcionario, int n);
void mediaIdadesFuncionario(Funcionario *funcionarios, int n, int contM, int contE, int contA);
void listarMedicosVenci(Funcionario *funcionario, int n, int somaVencim);


#endif