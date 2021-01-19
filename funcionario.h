#ifndef FUNCIONARIO_H_
#define FUNCIONARIO_H_

/*defines*/

#define TAMFUNCIONARIO 50

/*Enumerables*/


/*structures*/


typedef struct{
    int id;
    char nome[50];
    char genero;
    int idade;
    float vencimento;
}Funcionario;

/*functions/procedure declaration*/
void criarfuncionario(Funcionario *funcionario, int n);


#endif