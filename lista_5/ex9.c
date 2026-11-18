#include <stdio.h>
#define N 2

int main (int argc, char **argv) {
//Ler uma matriz A de mxn de elementos inteiros, verificar se ela é simétrica. Nota: uma matriz diz-se
//simétrica se coincidir com a sua transposta, ou seja: A = AT

int i, j, matrizA[N][N], simetrica = 1;

printf("Entre com os elementos da matriz A:\n");
for(i=0; i<N; i++) {
    for(j=0; j<N; j++) {
        scanf("%d", &matrizA[i][j]);
    }
}

for(i=0; i<N; i++) {
    for(j=0; j<N; j++) {
        if(matrizA[i][j] != matrizA[j][i]) {
            simetrica = 0;
            break;
        }
    }
    if(simetrica == 0) {
        break;
    }
}

if(simetrica == 1) {
    printf("A matriz A e simetrica.\n");
} else {
    printf("A matriz A nao eh simetrica.\n");
}

return 0;
}