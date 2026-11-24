#include <stdio.h>
#include <string.h>

#define MAX_LINHA 1024
#define MAX_ITENS 100
#define MAX_NOME 50

int main() {
    char linha_estoque[MAX_LINHA];
    char linha_pedido[MAX_LINHA];
    char estoque[MAX_ITENS][MAX_NOME];
    char faltantes[MAX_ITENS][MAX_NOME];

    int qtd_estoque = 0;
    int qtd_faltantes = 0;

    // Lê a linha do estoque e remove o '\n'
    if (fgets(linha_estoque, sizeof(linha_estoque), stdin) == NULL) return 0;
    linha_estoque[strcspn(linha_estoque, "\r\n")] = '\0';

    // Lê a linha do pedido e remove o '\n'
    if (fgets(linha_pedido, sizeof(linha_pedido), stdin) == NULL) return 0;
    linha_pedido[strcspn(linha_pedido, "\r\n")] = '\0';

    // Armazena cada produto do estoque em um vetor de strings
    char *token = strtok(linha_estoque, " ");
    while (token != NULL && qtd_estoque < MAX_ITENS) {
        strcpy(estoque[qtd_estoque++], token);
        token = strtok(NULL, " ");
    }

    // Verifica cada item pedido contra o estoque
    token = strtok(linha_pedido, " ");
    while (token != NULL) {
        int encontrado = 0;
        for (int i = 0; i < qtd_estoque; i++) {
            if (strcmp(token, estoque[i]) == 0) {
                encontrado = 1;
                break;
            }
        }
        if (!encontrado && qtd_faltantes < MAX_ITENS) {
            strcpy(faltantes[qtd_faltantes++], token);
        }
        token = strtok(NULL, " ");
    }

    // Imprime o resultado no formato esperado
    if (qtd_faltantes == 0) {
        printf("Tudo em estoque!\n");
    } else {
        printf("Faltam os itens: [");
        for (int i = 0; i < qtd_faltantes; i++) {
            printf("'%s'", faltantes[i]);
            if (i < qtd_faltantes - 1) {
                printf(", ");
            }
        }
        printf("]\n");
    }

    return 0;
}
