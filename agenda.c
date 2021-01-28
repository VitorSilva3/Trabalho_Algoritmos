#include <stdio.h>
#include <string.h>
#include "agenda.h"

void consultarAgendaClinica(Agenda *agenda, Funcionario *funcionario, int n){
    int totalConsultas = 0, i = 0;
    int idClinica;

    printf("ID Clinica desejada: ");
    scanf("%d", &idClinica);

    for (i = 0; i < n; i++)
    {
        if ((funcionario[i].tipo == "Enfermeiro" || funcionario[i].tipo == "enfermeiro") && funcionario[i].idClinica == idClinica)
        {
            for (int j = 0; j < n; i++)
            {
                if (agenda[j].idFuncionario == funcionario[i].id)
                {
                    totalConsultas++;
                }
            }
            puts("----------");
            printf(" - Enfermeiro %c, tem %d consultas", funcionario[i].nome, totalConsultas);
            puts("----------");
        }
    }

    if (i >= n)
    {
        puts("Funcionario sem consultas ou inexistente!");
    }
}

void consultarAgendaFuncionario(Agenda *agenda, int n){
    int i = 0, idFunc;
    Utente *utente;

    printf("ID Funcionario desejado: ");
    scanf("%d", idFunc);

    for (i = 0; i < n; i++)
    {
        if (agenda[i].idFuncionario == idFunc)
        {
            puts("----------");
            printf("Consulta %d/ %d/ %d as %d:%d horas.", agenda[i].consulta.dia,
                                                            agenda[i].consulta.mes,
                                                            agenda[i].consulta.ano,
                                                            agenda[i].consulta.hora,
                                                            agenda[i].consulta.minutos);
            for (int j = 0; j < n; j++)
            {
                if(utente[j].numeroSNS == agenda[i].numeroSNS)
                {
                    printf("\nUtente %c, com numero SNS %d", utente[j].nome, utente[j].numeroSNS); 
                }
            }
            puts("----------");
        }
        
    }

    if (i >= n)
    {
        puts("Funcionario sem consultas ou inexistente!");
    }
    
}