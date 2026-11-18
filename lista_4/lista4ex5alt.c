#include <stdio.h>
#define N 5
int main (int argc, char **argv) {
    //5) Escreva um programa que:
    // a) obtenha um vetor numérico X de valores inteiros (considere que os elementos do vetor são inseridos em ordem crescente)
    // b) determine e imprima, para cada número que se repete no conjunto, a quantidade de vezes que ele é repetido.
    // c) elimine elementos repetidos, formando um novo conjunto;
    // d) imprima o conjunto obtido no item c)

    int i, j, k;
    int x[N], y[N], z[N];
    printf("Entre com os valores inteiros (em ordem crescente):\n");
    for(i = 0; i < N; i++) {
        scanf("%d", &x[i]);
    }

    // Determina a quantidade de vezes que cada número se repete
    for(i = 0; i < N; i++) {
        y[i] = 0;
    }

    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            if(x[i] == x[j]) {
                y[i]++;
            }
        }
    }

    // Imprime a quantidade de vezes que cada número se repete
    for(i = 0; i < N; i++) {
        if(y[i] > 1) {
            printf("O número %d se repete %d vezes.\n", x[i], y[i]);
        }
    }

    // Elimina elementos repetidos
    k = 0;
    for(i = 0; i < N; i++) {
        if(y[i] == 1) {
            z[k] = x[i];
            k++;
        }
    }

    // Imprime o conjunto obtido
    printf("Conjunto sem elementos repetidos:\n");
    for(i = 0; i < k; i++) {
        printf("%d ", z[i]);
    }
    printf("\n");

    return 0;
}