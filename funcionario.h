#ifndef FUNCIONARIO_H_
#define FUNCIONARIO_H_

/*defines*/

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
}Funcionario;

/*functions/procedure declaration*/
void criarFuncionario(Funcionario *funcionario, int n);
void quantFuncionario(Funcionario *funcionario, int n);
void mediaIdadesFuncionario(Funcionario *funcionario, int n);
void listarMedicosVenci(Funcionario *funcionario, int n);


#endif