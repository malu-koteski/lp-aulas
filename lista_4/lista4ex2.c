#include <stdio.h>
#define N 3
int main (int argc, char **argv) {
    //2) Escreva um programa que:
    //a) obtenha dois vetores númericos quaisquer do usuário;
    //b) inverta o conteúdo do primeiro e concatene com o segundo;
    int i, j, k;
    int a[N], b[N], aux[N], c[2*N];

    //recebe os valores dos vetores a e b do usuário
    printf("Entre com os valores de a:\n");
    for (i=0; i<N; i++) {
        scanf("%d", &a[i]);
    }

    printf("Entre com os valores de b:\n");
    for (j=0; j<N; j++) {
        scanf("%d", &b[j]);
    }

    //inverte o conteúdo do primeiro vetor
    for(i = 0; i < N; i++) {
        aux[i] = a[N - 1 - i];
    }

    //concatena o vetor invertido com o segundo vetor
    k = 0;
    for(i = 0; i < N; i++) {
        c[k] = aux[i];
        k++;
    }
    for(j = 0; j < N; j++) {
        c[k] = b[j];
        k++;
    }

    // Imprime o vetor resultante
    printf("Vetor resultante:\n");
    for(i = 0; i < 2*N; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");

    return 0;
}