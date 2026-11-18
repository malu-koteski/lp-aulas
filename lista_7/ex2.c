#include <stdio.h>

int contemTodos(int x[], int tamX, int v[], int tamV)
{
    int i, j, encontrou;

    for (i = 0; i < tamV; i++)
    {
        encontrou = 0;
        for (j = 0; j < tamX; j++)
        {
            if (v[i] == x[j])
            {
                encontrou = 1;
                break;
            }
        }
        if (!encontrou)
            return 0;
    }

    return 1;
}

int semRepeticao(int x[], int tamX, int y[])
{
    int i, j;
    int repetiu;
    int k = 0;

    for (i = 0; i < tamX; i++)
    {
        repetiu = 0;
        for (j = 0; j < i; j++)
        {
            if (x[i] == x[j])
            {
                repetiu = 1;
                break;
            }
        }
        if (!repetiu)
        {
            y[k] = x[i];
            k++;
        }
    }
    return k;
}

void imprimeVetor(int v[], int tam)
{

    int i;
    for (i = 0; i < tam; i++)
        printf("%d ", v[i]);
    printf("\n");
}

int main()
{
    int x[] = {2, 3, 2, 5, 3, 8};
    int v[] = {2, 5};

    int tamX = 6;
    int tamV = 2;

    int y[6];
    int tamY;

    if (contemTodos(x, tamX, v, tamV))
        printf("Todos os elementos de v existem em x\n");
    else
        printf("Nem todos os elementos de v existem em x\n");

    tamY = semRepeticao(x, tamX, y);

    printf("\nVetor sem repeticoes:\n");
    imprimeVetor(y, tamY);

    return 0;
}