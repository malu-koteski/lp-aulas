#include <stdio.h>

#define N 2

void read_matrix(int matrix[N][N], int rows, int cols)
{
    printf("Entre com os elementos da matriz mxn:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void find_max(const int matrix[N][N], int rows, int cols, int *max_value)
{
    *max_value = matrix[0][0];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] > *max_value)
            {
                *max_value = matrix[i][j];
            }
        }
    }
}

int main(int argc, char **argv)
{
    // Faça um algoritmo que leia uma matriz mxn e imprima o maior elemento dessa matriz
    int mxn[N][N];
    int maior;

    read_matrix(mxn, N, N);
    find_max(mxn, N, N, &maior);

    printf("O maior elemento da matriz é: %d\n", maior);
    return 0;
}