#include <stdio.h>

typedef struct { int dia, mes, ano; } Data;

long dataInteiro (Data data_inteiro) {
    return (data_inteiro.ano * 10000L) + (data_inteiro.mes * 100) + data_inteiro.dia;
}

int intervalo (Data data1[], Data data2[]) {
    int i = 0;
    long dataCompromisso = dataInteiro(data1[i]);
    long dataAtual = dataInteiro(data2[i]);
    return (int)(dataAtual - dataCompromisso);
}

typedef struct { int horas, minutos; } Horario;

Horario converterMinutos(int totalMinutos) {
    Horario tempo;
    tempo.horas = totalMinutos / 60;
    tempo.minutos = totalMinutos % 60;
    return tempo;
}

int ehBissexto(int ano) {
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}

// Função para retornar a data final
Data calcularDataFinal(Data dataInicio, int numeroTotalDiasEvento) {
    int diasPorMes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    Data dataFinal = dataInicio;
    for (int i = 0; i < numeroTotalDiasEvento; i++) {
        dataFinal.dia++;
        int diasAtuaisFevereiro = diasPorMes[2] + ehBissexto(dataFinal.ano);
        if (dataFinal.dia > (dataFinal.mes == 2 ? diasAtuaisFevereiro : diasPorMes[dataFinal.mes])) {
            dataFinal.dia = 1;
            dataFinal.mes++;
        }
        if (dataFinal.mes > 12) {
            dataFinal.mes = 1;
            dataFinal.ano++;
        }
    }
    return dataFinal;
}
