#include <stdio.h>

#define N 2

int main (int argc, char **argv) {
//Faça   um   algoritmo   que   leia   uma   matriz  mxn  e   imprima   o   maior   elemento   dessa   matriz

int mxn[N][N];
int i, j, maior;

printf("Entre com os elementos da matriz mxn:\n");
for(i=0; i<N; i++) {
    for(j=0; j<N; j++) {
        scanf("%d", &mxn[i][j]);
    }
}

maior = mxn[0][0];
for(i=0; i<N; i++) {
    for(j=0; j<N; j++) {
        if(mxn[i][j] > maior) {
            maior = mxn[i][j];
        }
    }
}
printf("O maior elemento da matriz é: %d\n", maior);

return 0;
}