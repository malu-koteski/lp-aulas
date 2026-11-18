#include <stdio.h>

#define N 2

int main (int argc, char **argv) {
//A partir de uma matriz A qualquer de números inteiros positivos, gerar uma matriz B de mapeamento
//tal que:
//B[i][j] = 0, se A[i][j] é par;
//B[i][j] = 1, se A[i][j] é ímpar.

    int i, j;
    int matrizA[N][N], matrizB[N][N];

    printf("Entre com os elementos da matriz A:\n");
    for(i=0; i<N; i++) {
        for(j=0; j<N; j++) {
            scanf("%d", &matrizA[i][j]);
        }
    }
    
    for(i=0; i<N; i++) {
        for(j=0; j<N; j++) {
            if(matrizA[i][j] % 2 == 0) {
                matrizB[i][j] = 0;
            } else {
                matrizB[i][j] = 1;
            }
        }
    }

    printf("A matriz B eh:\n");
    for(i=0; i<N; i++) {
        for(j=0; j<N; j++) {
            printf("%d ", matrizB[i][j]);
        }
        printf("\n");
    }

    return 0;
}