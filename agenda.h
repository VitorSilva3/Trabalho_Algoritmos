#ifndef AGENDA_H_
#define AGENDA_H_

    #include <utils.h>
    #include "funcionario.h"
    #include "utente.h"

    typedef struct 
    {
        Data consulta;
        int idFuncionario;
        int numeroSNS;
    }Agenda;
    
    void consultarAgendaClinica(Agenda *agenda, Funcionario *funcionario, int n, int idClinica);
    void consultarAgendaFuncionario(Agenda *agenda, Utente *utente, int idFunc, int n);

#endif