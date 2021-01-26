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
}Funcionario;

/*functions/procedure declaration*/
void criarFuncionario(Funcionario *funcionario, Clinicas *clinica, int n);
void quantFuncionario(Funcionario *funcionario, int n);
void mediaIdadesFuncionario(Funcionario *funcionarios, int n, int contM, int contE, int contA);
void somaVencimPorGenero(Funcionario *funcionarios, int n);
void listarMedicosVenci(Funcionario *funcionario, int n, int somaVencim);


#endif