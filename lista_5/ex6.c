#include <stdio.h>

#define N 6

int main (int argc, char **argv) {
//Gerar e imprimir a matriz abaixo:
//1 2 3 4 5 6
//2 1 2 3 4 5
//3 4 1 2 3 4
//4 5 6 1 2 3
//5 6 7 8 1 2
//6 7 8 9 10 1 
//veja que a diagonal principal é composta por 1

int i, j, valor;

printf("A matriz eh:\n");
for(i = 0; i < N; i++) {
    for(j = 0; j < N; j++) {
        if(i == j)
            valor = 1;
        else if(j > i)
            valor = j - i + 1;
        else
            valor = i + 1 + j;
        printf("%2d ", valor);
    }
    printf("\n");
}

return 0;
}