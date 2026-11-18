//Maria Luisa Koteski Bustamante de Melo 187556

#include <stdio.h>
#define max 100
int main (int argc, char **argv) {
    int matriz[max][max];
    int ordem_m, i, j;
    int menorSoma = 0, maiorSoma = 0, maxMax = 0, minMax = 0, soma = 0;
    int linhaMenorSoma = 0, linhaMaiorSoma = 0;

    printf("Entre com a ordem da matriz:\n");
    scanf("%d", &ordem_m); //recebe a ordem da matriz

    printf("Entre com os valores da matriz:\n");
    for(i=0; i<ordem_m; i++) { //pega os valores da matriz para linhas e colunas
        for(j=0; j<ordem_m; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for(j=0; j<ordem_m; j++) {
        menorSoma += matriz[0][j]; //inicializa a menor soma com a soma da primeira linha
        maiorSoma += matriz[0][j]; //inicializa a maior soma com a soma da primeira linha
    }

    for(i=1; i<ordem_m; i++) {
        for(j=0; j<ordem_m; j++) {
            soma += matriz[i][j]; //soma os elementos da linha atual
        }
        if(soma < menorSoma) { //verifica se a soma da linha é menor que a menor soma encontrada
            menorSoma = soma;
            linhaMenorSoma = i;
        }
        if(soma > maiorSoma) { //verifica se a soma da linha é maior que a maior soma encontrada
            maiorSoma = soma;
            linhaMaiorSoma = i;
        }
    }

    minMax = matriz[linhaMenorSoma][0]; //inicializa o menor elemento da linha com o primeiro elemento da linha
    maxMax = matriz[linhaMaiorSoma][0]; //inicializa o maior elemento da linha com o primeiro elemento da linha

    for(j=1; j<ordem_m; j++) {
        if(matriz[linhaMenorSoma][j] < minMax) { //verifica se o elemento da linha é menor que o menor elemento encontrado
            minMax = matriz[linhaMenorSoma][j];
        }
        if(matriz[linhaMaiorSoma][j] > maxMax) { //verifica se o elemento da linha é maior que o maior elemento encontrado
            maxMax = matriz[linhaMaiorSoma][j];
        }
    }

    printf("Menor elemento da linha com menor soma: %d\n", minMax);
    printf("Maior elemento da linha com maior soma: %d\n", maxMax);
    printf("Menor soma = %d (linha %d)\n", menorSoma, linhaMenorSoma);
    printf("Maior soma = %d (linha %d)\n", maiorSoma, linhaMaiorSoma);
    
    return 0;
}