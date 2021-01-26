#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "funcionario.h"
#include "clinicas.h"
#include "agenda.h"


void menuPrincipal();
int menuFuncionario(Funcionario *funcionarios, int nFuncionarios, Clinica clinica);
int menuClinica(Clinica *Clinicas, int nClinicas, Funcionario funcionario);
int menuAgenda(Agenda *Agendas, int nAgendas, Funcionario funcionario);
int menuUtente(Utente *Utentes, int nUtentes, Agenda agenda);

int main(int argc, char const *argv[])
{
    menuPrincipal();

    getchar();
    
    return 0;
}

void menuPrincipal(){

    Funcionario funcionarios[TAMFUNCIONARIO], funcionario;
    Clinica clinicas[TAMCLINICA], clinica;
    Utente utentes[TAMUTENTE], utente; 
    Agenda agendas[TAMAGENDA], agenda;

    int nFuncionarios = 0, nClinicas = 0, nAgendas = 0, nUtentes = 0;
    int opcao;

    do
    {
        system("cls");
        puts(" __________________________ ");
        puts("|           MENU           |");
        puts("|--------------------------|");
        puts("|1-Funcionarios            |");
        puts("|2-Clinicas                |");
        puts("|3-Utentes                 |");
        puts("|4-Agenda                  |");
        puts("|0-Sair                    |");
        puts("|--------------------------|");
        printf("|Opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
            break;
            case 1:
                menuFuncionario(funcionarios, nFuncionarios, clinica);
            break;
            case 2:
                menuClinica(clinicas, nClinicas, funcionario);
            break;
            case 3:
                menuUtente(utentes, nUtentes, agenda);
            break;
            case 4:
                menuAgenda(agendas, nAgendas, funcionario);
            break;
            default:
                printf("opcao invalida");
                fflush(stdin);

                getchar();
            break;
        }
    } while (opcao != 0);
    
    
}


int menuFuncionario(Funcionario *funcionarios, int nFuncionarios, Clinica clinica){

    int opcao;

    system("cls");
    puts(" __________________________________ ");
    puts("|           MENU                   |");
    puts("|----------------------------------|");
    puts("| Funcionarios                     |");
    puts("|----------------------------------|");
    puts("|1-Inserir Funcionarios            |");
    puts("|2-Total de Funcionarios           |");
    puts("|3-Media de Idades                 |");
    puts("|4-Soma dos Vencimentos            |");
    puts("|5-Lista de Medicos e Vencimentos  |");
    puts("|0-Sair                            |");
    puts("|----------------------------------|");

    printf("|Opcao:");
    scanf("%d", &opcao);

    return opcao;
}

int menuClinica(Clinica *Clinicas, int nClinicas, Funcionario funcionario){

    int opcao;

    system("cls");
    puts(" __________________________ ");
    puts("|           MENU           |");
    puts("|--------------------------|");
    puts("| Clinicas                 |");
    puts("|--------------------------|");
    puts("|1-Inserir Clinicas        |");
    puts("|0-Sair                    |");
    puts("|--------------------------|");

    printf("|Opcao:");
    scanf("%d", &opcao);

    return opcao;
}

int menuAgenda(Agenda *Agendas, int nAgendas, Funcionario funcionario){

    int opcao;

    system("cls");
    puts(" _____________________________________ ");
    puts("|           MENU                      |");
    puts("|-------------------------------------|");
    puts("| Agendas                             |");
    puts("|-------------------------------------|");
    puts("|1-Consultar agenda por clinica       |");
    puts("|2-Consultar agenda por funcionário   |");
    puts("|0-Sair                               |");
    puts("|-------------------------------------|");

    printf("|Opcao:");
    scanf("%d", &opcao);

    return opcao;
}

int menuUtente(Utente *Utentes, int nUtentes, Agenda agenda){

    int opcao;

    system("cls");
    puts(" __________________________ ");
    puts("|           MENU           |");
    puts("|--------------------------|");
    puts("| Utentes                  |");
    puts("|--------------------------|");
    puts("|1-                        |");
    puts("|2-                        |");
    puts("|3-                        |");
    puts("|4-                        |");
    puts("|0-Sair                    |");
    puts("|--------------------------|");

    printf("|Opcao:");
    scanf("%d", &opcao);

    return opcao;
}