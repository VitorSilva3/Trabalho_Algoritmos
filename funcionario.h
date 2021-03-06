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
void criarFuncionario(Funcionario *funcionario, Clinica *clinica, int n);
//void quantFuncionario(Funcionario *funcionario, int n);
void mediaIdadesFuncionario(Funcionario *funcionarios, Clinica *clinicas, int n, int nClinicas);
//void somaVencimPorGenero(Funcionario *funcionarios, int n);
void listarMedicosVenci(Funcionario *funcionario, Clinica *clinica, int n);


#endif