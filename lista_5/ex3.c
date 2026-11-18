#include <stdio.h>

#define N 4

int main (int argc, char **argv) {
//Dado um vetor A com n números reais, obter um vetor B, também com n números, da seguinte forma:
//B[0] = A[0]
//B[1] = 2*A[0] + A[1]
//B[2] = 3*A[0] + 2*A[1] + A[2]
//B[3] = 4*A[0] + 3*A[1] + 2*A[2] + A[3]

    int i, j;
    float vetorA[N], vetorB[N];

    printf("Entre com os elementos do vetor A:\n");
    for (i = 0; i < N; i++) {
        scanf("%f", &vetorA[i]);
    }

    for(i=0; i<N; i++) {
        vetorB[i] = 0;
        for(j=0; j<=i; j++) {
            vetorB[i] += (i-j+1)*vetorA[j];
        }
    }

    printf("O vetor B é:\n");
    for (i = 0; i < N; i++) {
        printf("%.2f ", vetorB[i]);
    }
    printf("\n");

    return 0;
}