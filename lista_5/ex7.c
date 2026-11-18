#include <stdio.h>
#define N 6

int main (int argc, char **argv) {
//Gerar e imprimir a matriz abaixo:
//1 1 1 1 1 1
//1 2 2 2 2 1
//1 2 3 3 2 1
//1 2 3 3 2 1
//1 2 2 2 2 1
//1 1 1 1 1 1

int i, j, valor;
printf("A matriz eh:\n");
for(i = 0; i < N; i++) {
    for(j = 0; j < N; j++) {
        if(i == 0 || i == N-1 || j == 0 || j == N-1)
            valor = 1;
        else if(i == 1 || i == N-2 || j == 1 || j == N-2)
            valor = 2;
        else
            valor = 3;
        printf("%2d ", valor);
    }
    printf("\n");
}

return 0;
}