#include <stdio.h>
#include <string.h>

typedef struct
{
    int dia;
    int mes;
    int ano;
} Data;

typedef struct
{
    int hora, minuto, segundo;
} Horario;

typedef struct
{
    char descricao[500];
    Data data_agenda;
    Horario horario_agenda;
} CompromissoAgenda;

void palavraChave(CompromissoAgenda compromisso[], int totalCompromissos, char buscaPalavra[])
{
    int i, encontrados = 0;

    for (i = 0; i < totalCompromissos; i++)
    {
        if (strstr(compromisso[i].descricao, buscaPalavra) != NULL)
        {
            printf("Compromisso - descrição: %s; data: %02d/%02d/%02d; horario: %02d/%02d.\n", 
                compromisso[i].descricao, compromisso[i].data_agenda.dia, compromisso[i].data_agenda.mes, 
                compromisso[i].data_agenda.ano, compromisso[i].horario_agenda.hora, compromisso[i].horario_agenda.minuto);
            encontrados++;
        }
    }

    if (encontrados == 0)
    {
        printf("Nenhum compromisso encontrado com essa palavra chave.\n");
    }
    else
    {
        printf("Foram encontrados %d compromissos.\n", encontrados);
    }
}

long dataInteiro (Data data_inteiro) {
    return (data_inteiro.ano *10000L) + (data_inteiro.mes *100) + data_inteiro.dia;
}

int intervaloDatas (CompromissoAgenda intervaloCompromissoDatas[], int data1, int data2, int total, int indice) {
    if (indice >= total) return 0;
    int encontradoPeriodo = 0;
    long dataCompromisso = dataInteiro(intervaloCompromissoDatas[indice].data_agenda);

    if (dataCompromisso >= data1 && dataCompromisso <= data2) {
        printf("Compromisso - descrição: %s; data: %02d/%02d/%02d; horario: %02d/%02d.\n", 
                intervaloCompromissoDatas[indice].descricao, intervaloCompromissoDatas[indice].data_agenda.dia, intervaloCompromissoDatas[indice].data_agenda.mes, 
                intervaloCompromissoDatas[indice].data_agenda.ano, intervaloCompromissoDatas[indice].horario_agenda.hora, intervaloCompromissoDatas[indice].horario_agenda.minuto);
        encontradoPeriodo = 1;
    }
    return encontradoPeriodo + intervaloDatas(intervaloCompromissoDatas, total, indice + 1, data1, data2);
} 

int intervaloDatasIterativo (CompromissoAgenda intervaloCompromissoDatasIterativo[], int data1, int data2, int total) {
    int i, encontradoPeriodo = 0;
    long dataCompromisso = dataInteiro(intervaloCompromissoDatasIterativo[i].data_agenda);
    for (i=0; i<total; i++) {
        if (dataCompromisso >= data1 && dataCompromisso <= data2) {
        printf("Compromisso - descrição: %s; data: %02d/%02d/%02d; horario: %02d/%02d.\n", 
                intervaloCompromissoDatasIterativo[i].descricao, intervaloCompromissoDatasIterativo[i].data_agenda.dia, intervaloCompromissoDatasIterativo[i].data_agenda.mes, 
                intervaloCompromissoDatasIterativo[i].data_agenda.ano, intervaloCompromissoDatasIterativo[i].horario_agenda.hora, intervaloCompromissoDatasIterativo[i].horario_agenda.minuto);
        encontradoPeriodo++;
        }
    }
    return encontradoPeriodo++;
}

