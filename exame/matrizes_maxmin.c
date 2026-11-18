#include <stdio.h>
#define M 4

void minmax (int mat[M][M]) {
    int i, j; 
    int soma_linha = 0, menorSoma = 0, maiorSoma = 0, linhaMenor = 0, linhaMaior = 0;

    for (j=0; j<M; j++) {
        menorSoma += mat[0][j];
        maiorSoma += mat[0][j];
    }

    for (i=1; i<M; i++) {
        soma_linha = 0;
        for (j=0; j<M; j++) {
            soma_linha += mat[i][j];
        }
        if (soma_linha < menorSoma) {
            menorSoma = soma_linha;
            linhaMenor = i;
        }
        if (soma_linha > maiorSoma) {
            maiorSoma = soma_linha;
            linhaMaior = i;
        }
    }

    int minmax = mat[linhaMenor][0];
    for (j=1; j<M; j++) {
        if (mat[linhaMenor][j] > minmax) {
            minmax = mat[linhaMenor][0];
        }
    }

    int maxmax = mat[linhaMaior][0];
    for (j=1; j<M; j++) {
        if (mat[linhaMaior][j] > maxmax) {
            maxmax = mat[linhaMaior][0];
        }
    }

    printf("Linha de menor soma: %d\n", linhaMenor);
    printf("Minimax = %d\n", minimax);

    printf("Linha de maior soma: %d\n", linhaMaior);
    printf("Maxmax = %d\n", maxmax);
}

int maxmax(int mat[M][M]) {
    int i, j;
    int somaLinha;
    int maiorSoma = 0, linhaMaior = 0;

    for (j = 0; j < M; j++) {
        maiorSoma += mat[0][j];
    }

    for (i = 1; i < M; i++) {
        somaLinha = 0;
        for (j = 0; j < M; j++) {
            somaLinha += mat[i][j];
        }
        if (somaLinha > maiorSoma) {
            maiorSoma = somaLinha;
            linhaMaior = i;
        }
    }

    int maior = mat[linhaMaior][0];
    for (j = 1; j < M; j++) {
        if (mat[linhaMaior][j] > maior) {
            maior = mat[linhaMaior][j];
        }
    }
    return maior;
}

int minimax(int mat[M][M]) {
    int i, j;
    int somaLinha;
    int menorSoma = 0, linhaMenor = 0;

    for (j = 0; j < M; j++) {
        menorSoma += mat[0][j];
    }

    for (i = 1; i < M; i++) {
        somaLinha = 0;
        for (j = 0; j < M; j++) {
            somaLinha += mat[i][j];
        }
        if (somaLinha < menorSoma) {
            menorSoma = somaLinha;
            linhaMenor = i;
        }
    }

    int maior = mat[linhaMenor][0];
    for (j = 1; j < M; j++) {
        if (mat[linhaMenor][j] > maior) {
            maior = mat[linhaMenor][j];
        }
    }
    return maior;
}
