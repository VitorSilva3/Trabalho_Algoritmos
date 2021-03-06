#ifndef AGENDA_H_
#define AGENDA_H_

#include "utils.h"
#include "funcionario.h"
#include "utente.h"

#define TAMAGENDA 50

    typedef struct 
    {
        Data consulta;
        int idFuncionario;
        int numeroSNS;
    }Agenda;
    
    void consultarAgendaClinica(Agenda *agenda, Funcionario *funcionario, int n);
    void consultarAgendaFuncionario(Agenda *agenda, int n);

#endif