#include <stdio.h>
#define N 4

int main (int argc, char **argv) {
//Gerar e imprimir a matriz abaixo:
//3 4 5 6
//5 5 6 7
//7 8 7 8
//9 10 11 9

int i, j, valor;
printf("A matriz eh:\n");
for(i = 0; i < N; i++) {
    for(j = 0; j < N; j++) {
        if(j == i)
            printf("%2d ", 2*i + 3);
        else
            printf("%2d ", 2*i + 3 + j);
    }
    printf("\n");
}

return 0;
}