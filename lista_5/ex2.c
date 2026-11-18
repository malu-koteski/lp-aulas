#include <stdio.h>

#define N 3

int main (int argc, char **argv) {
//Ler um vetor A de n números reais. Determinar e imprimir a maior diferença entre dois elementos
//consecutivos desse vetor.

    int i;
    float vetorA[N], diferenca, maiorDiferenca;

    printf("Entre com os elementos do vetor A:\n");
    for (i=0; i<N; i++) {
        scanf("%f", &vetorA[i]);
    }
    
    maiorDiferenca = 0;
    for(i=0; i<N-1; i++) {
        diferenca = vetorA[i+1] - vetorA[i];
        if(diferenca > maiorDiferenca) {
            maiorDiferenca = diferenca;
        }
    }
    printf("A maior diferença entre dois elementos consecutivos é: %.2f\n", maiorDiferenca);
    return 0;
}