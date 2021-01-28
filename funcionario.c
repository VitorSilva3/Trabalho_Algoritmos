#include <stdio.h>
#include <string.h>
#include "funcionario.h"

void criarFuncionario(Funcionario *funcionario, Clinica *clinica, int n){

    printf("Tipo de Funcionário: ");
    fgets(funcionario->tipo, 50, stdin);
    funcionario->tipo[strlen(funcionario->tipo) - 1] = 0;

    printf("Nome: ");
    fgets(funcionario->nome, 50, stdin);
    funcionario->nome[strlen(funcionario->nome) - 1] = 0;

    printf("Genero (F/M): ");
    scanf("%c", &funcionario->genero);

    printf("Idade: ");
    scanf("%d", &funcionario->idade);

    printf("Vencimento: ");
    scanf("%f", &funcionario->vencimento);

    printf("Clínica pertencente: ");
    scanf("%d", &funcionario->idClinica);

    if (clinica->id != funcionario->idClinica)
    {
        puts("Clinica indisponivel");
        printf("Clínica pertencente: ");
        scanf("%d", &funcionario->idClinica);
    }
    
    puts("Tipos de funcionários: Médico, Enfermeiro e Auxiliar");
    printf("Tipo de Funcionario: ");
    scanf("%c", &funcionario->tipo);

    funcionario->id = n + 1;
}

/*void quantFuncionario(Funcionario *funcionarios, int n){

    int contM = 0, contE = 0, contA = 0; 

    for (int i = 0; i < n; i++)
    {
       if(funcionarios[i].tipo == "Médico" || funcionarios[i].tipo == "médico")
        {
            contM = contM + 1;

        }

        if(funcionarios[i].tipo == "Enfermeiro" || funcionarios[i].tipo == "enfermeiro")
        {
            contE = contE + 1;

        }

        if(funcionarios[i].tipo == "Auxiliar" || funcionarios[i].tipo == "auxiliar")
        {
            contA = contA + 1;
        } 
    }
    return contM, contE, contA;
}*/

void mediaIdadesFuncionario(Funcionario *funcionarios, Clinica *clinicas, int n, int nClinicas){
    
    for(int j = 0; j < nClinicas; j++)
    {    

        int somaIdadesM = 0, somaIdadesE = 0, somaIdadesA = 0, contM = 0, contE = 0, contA = 0;
        float mediaIdadesM = 0, mediaIdadesE = 0, mediaIdadesA = 0, somaVenciMM = 0, somaVenciMF = 0, somaVenciEM = 0, somaVenciEF = 0, somaVenciAM = 0, somaVenciAF = 0,;


        for(int i = 0; i < n; i++)
        {    
            if((funcionarios[i].tipo == "Médico" || funcionarios[i].tipo == "médico") && funcionarios[i].idClinica == clinicas[j])
            {
                somaIdadesM = somaIdadesM + funcionarios[i].idade;
                contM++;
                if (funcionarios[i].genero == "Masculino" || funcionarios[i].genero == "masculino")
                {
                    somaVenciMM = somaVenciMM + funcionarios[i].vencimento;
                }
                else
                {
                    somaVenciMF = somaVenciMF + funcionarios[i].vencimento;
                }
                
            }

            if(funcionarios[i].tipo == "Enfermeiro" || funcionarios[i].tipo == "enfermeiro")
            {
                somaIdadesE = somaIdadesE + funcionarios[i].idade;
                contE++;
                if (funcionarios[i].genero == "Masculino" || funcionarios[i].genero == "masculino")
                {
                    somaVenciEM = somaVenciEM + funcionarios[i].vencimento;
                }
                else
                {
                    somaVenciEF = somaVenciEF + funcionarios[i].vencimento;
                }

            }

            if(funcionarios[i].tipo == "Auxiliar" || funcionarios[i].tipo == "auxiliar")
            {
                somaIdadesA = somaIdadesA + funcionarios[i].idade;
                contA++;
                if (funcionarios[i].genero == "Masculino" || funcionarios[i].genero == "masculino")
                {
                    somaVenciAM = somaVenciAM + funcionarios[i].vencimento;
                }
                else
                {
                    somaVenciAF = somaVenciAF + funcionarios[i].vencimento;
                }
            }
        }
        mediaIdadesM = somaIdadesM / contM;
        mediaIdadesE = somaIdadesE / contE;
        mediaIdadesA = somaIdadesA / contA;

        printf("Clinica %d", clinicas[j].id);
        printf("\tExiste %d medicos com media de %f de idades", contM, mediaIdadesM);
        printf("\t\tSoma de vencimentos do genero masculino: %f", somaVenciMM);
        printf("\t\tSoma de vencimentos do genero feminino: %f", somaVenciMF);

        printf("\tExiste %d enfermeiros com media de %f de idades", contE, mediaIdadesE);
        printf("\t\tSoma de vencimentos do genero masculino: %f", somaVenciEM);
        printf("\t\tSoma de vencimentos do genero feminino: %f", somaVenciEF);

        printf("\tExiste %d auxiliares com media de %f de idades", contA, mediaIdadesA);
        printf("\t\tSoma de vencimentos do genero masculino: %f", somaVenciAM);
        printf("\t\tSoma de vencimentos do genero feminino: %f", somaVenciAF);
    }
}

/*void somaVencimPorGenero(Funcionario *funcionarios, int n){

    float somaVencMedF = 0, somaVencMedM = 0;
    float somaVencEnfF = 0, somaVencEnfM = 0;
    float somaVencAuxF = 0, somaVencAuxM = 0;

    for(int i = 0; i < n; i++)
    {    
        if(funcionarios[i].tipo == "Médico" || funcionarios[i].tipo == "médico")
        {
            if (funcionarios[i].genero == 'F')
            {
                somaVencMedF = somaVencMedF + funcionarios[i].vencimento;
            }
            else if (funcionarios[i].genero == 'M')
            {
                somaVencMedM = somaVencMedM + funcionarios[i].vencimento;
            }
            
        }

        if(funcionarios[i].tipo == "Enfermeiro" || funcionarios[i].tipo == "enfermeiro")
        {
            if (funcionarios[i].genero == 'F')
            {
                somaVencEnfF = somaVencEnfF + funcionarios[i].vencimento;
            }
            else if (funcionarios[i].genero == 'M')
            {
                somaVencEnfM = somaVencEnfM + funcionarios[i].vencimento;
            }   
        }

        if(funcionarios[i].tipo == "Auxiliar" || funcionarios[i].tipo == "auxiliar")
        {
            if (funcionarios[i].genero == 'F')
            {
                somaVencAuxF = somaVencAuxF + funcionarios[i].vencimento;
            }
            else if (funcionarios[i].genero == 'M')
            {
                somaVencAuxM = somaVencAuxM + funcionarios[i].vencimento;
            } 
        }
    }
}*/


void listarMedicosVenci(Funcionario *funcionario, Clinica *clinica, int n){
    float somaVencim = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Clinica ID: %d", clinica[i].id);
            if (funcionario[j].tipo == "Medico" && funcionario[j].idClinica == clinica[i].id)
            {
                printf("\tMedico %c (ID: %d), vencimento %f", funcionario[j].nome, funcionario[j].id, funcionario[j].vencimento);

                somaVencim = somaVencim + funcionario[j].vencimento;
            }
        }
    }
    printf("Total de vencimentos %f", somaVencim);
}