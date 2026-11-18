#include <stdio.h>
#define N 3

void read_vector(int v[], int n, const char *name) {
    printf("Entre com os valores de %s:\n", name);
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
}

void intersection(const int a[], const int b[], int n, int c[], int *c_len) {
    int k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i] == b[j]) {
                c[k++] = a[i];
                break;
            }
        }
    }
    *c_len = k;
}

void union_vectors(const int a[], const int b[], int n, int d[], int *d_len) {
    int l = 0;
    /* copia a para d */
    for (int i = 0; i < n; i++) {
        d[l++] = a[i];
    }

    for (int i = 0; i < n; i++) {
        int existe = 0;
        for (int j = 0; j < l; j++) {
            if (b[i] == d[j]) {
                existe = 1;
                break;
            }
        }
        if (!existe) {
            d[l++] = b[i];
        }
    }
    *d_len = l;
}

void print_vector(const int v[], int len) {
    for (int i = 0; i < len; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main(int argc, char **argv) {
    int a[N], b[N], c[N], d[2 * N];
    int c_len = 0, d_len = 0;

    read_vector(a, N, "a");
    read_vector(b, N, "b");

    intersection(a, b, N, c, &c_len);
    union_vectors(a, b, N, d, &d_len);

    printf("Intersecao de A e B:\n");
    print_vector(c, c_len);
    printf("\n");

    printf("Uniao de A e B:\n");
    print_vector(d, d_len);

    return 0;
}