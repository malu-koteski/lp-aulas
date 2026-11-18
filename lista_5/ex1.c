#include <stdio.h>

#define N 3

void read_int(int *x, const char *prompt) {
    printf("%s", prompt);
    scanf("%d", x);
}

void read_vector(int v[], int n, const char *prompt) {
    printf("%s", prompt);
    for (int i = 0; i < n; i++) scanf("%d", &v[i]);
}

/* retorna índice ou -1 se não encontrado */
int find_in_vector(const int v[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (v[i] == key) return i;
    }
    return -1;
}

int main (int argc, char **argv) {
    int k, vetorA[N];

    read_int(&k, "Entre com um elemento k:\n");
    read_vector(vetorA, N, "Entre com os elementos do vetor A:\n");

    int pos = find_in_vector(vetorA, N, k);
    if (pos >= 0) printf("Elemento k encontrado na posicao %d.\n", pos);
    else printf("Elemento k não encontrado.\n");

    return 0;
}
