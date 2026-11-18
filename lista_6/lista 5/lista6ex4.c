#include <stdio.h>
#define N 2

void read_matrix(int m[N][N], int rows, int cols)
{
    printf("Entre com os elementos da matriz A:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }
}

void map_parity_matrix(const int a[N][N], int b[N][N], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            b[i][j] = (a[i][j] % 2 == 0) ? 0 : 1;
        }
    }
}

void print_matrix(const int m[N][N], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

int main(int argc, char **argv)
{
    // A partir de uma matriz A qualquer de números inteiros positivos, gerar uma matriz B de mapeamento
    // tal que:
    // B[i][j] = 0, se A[i][j] é par;
    // B[i][j] = 1, se A[i][j] é ímpar.

    int matrizA[N][N];
    int matrizB[N][N];

    read_matrix(matrizA, N, N);
    map_parity_matrix(matrizA, matrizB, N, N);

    printf("A matriz B eh:\n");
    print_matrix(matrizB, N, N);

    return 0;
}
