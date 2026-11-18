#include <stdio.h>

int main()
{
    int MAT[10][15];
    int i, j;
    int soma;

    // Leitura da matriz
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 15; j++)
        {
            printf("MAT[%d][%d]: ", i, j);
            scanf("%d", &MAT[i][j]);
        }
    }

    // Soma de cada linha
    printf("\nSOMA DAS LINHAS\n");

    for (i = 0; i < 10; i++)
    {
        soma = 0;

        for (j = 0; j < 15; j++)
        {
            soma += MAT[i][j];
        }

        printf("Linha %d: soma = %d - ", i, soma);

        if (soma % 2 == 0)
            printf("PAR\n");
        else
            printf("IMPAR\n");
    }

    // Soma de cada coluna
    printf("\nSOMA DAS COLUNAS\n");

    for (j = 0; j < 15; j++)
    {
        soma = 0;

        for (i = 0; i < 10; i++)
        {
            soma += MAT[i][j];
        }

        printf("Coluna %d: soma = %d - ", j, soma);

        if (soma % 2 == 0)
            printf("PAR\n");
        else
            printf("IMPAR\n");
    }

    return 0;
}