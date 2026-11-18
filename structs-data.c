#include <stdio.h>

typedef struct
{
    int dia, mes, ano;
} Data;

int anoBissexto(int ano)
{
    return (ano % 400 == 0 || ano % 4 == 0 && ano % 100 != 0);
}

int diasPassados(Data dias)
{
    int i, total = 0;

    int diasMes[12] = {
        31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for (i = 0; i < dias.ano; i++)
    {
        if (anoBissexto(i))
        {
            total += 366;
        }
        else
        {
            total += 365;
        }
    }

    for (i = 0; i < dias.mes; i++)
    {
        total += diasMes[i - 1];

        if (i == 2 && anoBissexto(dias.ano))
        {
            total++;
        }
    }

    total += dias.dia;

    return total;
}

int diferencaDias(Data data1, Data data2)
{
    int dias1 = diasPassados(data1);
    int dias2 = diasPassados(data2);

    if (dias1 > dias2)
    {
        return dias1 - dias2;
    }
    else
    {
        return dias2 - dias1;
    }
}

int main(int argc, char **argv)
{

    Data data1 = {10, 6, 2025};
    Data data2 = {30, 5, 2026};

    printf("A diferença de dias passados entre as datas é:%d\n", diferencaDias(data1, data2));

    return 0;
}