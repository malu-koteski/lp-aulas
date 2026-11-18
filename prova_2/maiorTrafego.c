#include <stdio.h>
#define M 2
#define N 2

int maiorRadar(int mat[M][N]) {
    int i, j;
    int soma_linha, maiorRadar = -1, indiceMaiorRadar = 0; //maior é inicializado com -1 pq magina que nenhum veiculo tivesse passado, seria = 0!

    for (i = 0; i < M; i++) {
        soma_linha = 0;
        for (j = 0; j < N; j++) {
            soma_linha += mat[i][j];
        }
        if (soma_linha > maiorRadar) {
            maiorRadar = soma_linha;
            indiceMaiorRadar = i;
        }
    }
    return indiceMaiorRadar;
}

int maiorTráfegoNoMaiorRadar(int mat[M][N], int transporteMaiorRadar) {
    int j;
    int maiorTransporte = -1, indiceTransporteMaiorNoMaiorRadar = 0;
    transporteMaiorRadar = maiorRadar;

    for (j = 0; j < N; j++) {
        if (mat[transporteMaiorRadar][j] > maiorTransporte) {
            maiorTransporte = mat[transporteMaiorRadar][j];
            indiceTransporteMaiorNoMaiorRadar = j;
        }
    }
    return indiceTransporteMaiorNoMaiorRadar;
}

//crie uma função que considere uma mat[m][n] já preenchida em que temos radares no valor m, sendo que a matriz é composta por radares e métodos de transporte 
//queremos encontrar o radar cujo volume de transporte registrados seja o maior
//considerando a função de maior radar, agora queremos saber qual foi o tipo de veiculo mais utlizado nesse radar