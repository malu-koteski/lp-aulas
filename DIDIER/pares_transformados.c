#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) {
        return 0;
    }

    int pares[n];
    int impares[n];
    int qtd_pares = 0;
    int qtd_impares = 0;

    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);

        if (num % 2 == 0) {
            pares[qtd_pares++] = num * 2;
        } else {
            impares[qtd_impares++] = num;
        }
    }

    // Imprime no formato de lista do Python: [20, 8, 16]
    printf("Pares transformados: [");
    for (int i = 0; i < qtd_pares; i++) {
        printf("%d", pares[i]);
        if (i < qtd_pares - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    printf("Ímpares originais: [");
    for (int i = 0; i < qtd_impares; i++) {
        printf("%d", impares[i]);
        if (i < qtd_impares - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}
