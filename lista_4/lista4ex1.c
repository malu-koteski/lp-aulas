#include <stdio.h>
#define N 3
#define V 1
#define F 0
int main(int argc, char **argv)
{
    // 1) Escreva um programa que, dados dois vetores A e B:
    // a) armazene a interseção de A e B em um vetor C;
    // b) armazene a união de A e B em um vetor D;
    // c) imprima os vetores C e D.
    int i, j, k, l, existe;
    int a[N], b[N], c[N], d[2 * N];

    printf("Entre com os valores de a:\n");
    for (i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Entre com os valores de b:\n");
    for (j = 0; j < N; j++)
    {
        scanf("%d", &b[j]);
    }

    k = 0;
    for (i = 0; i < N; i++)
    { // vetor de a
        for (j = 0; j < N; j++)
        { // vetor de b
            if (a[i] == b[j])
            {                // verifica se existe interseção
                c[k] = a[i]; // armazena a interseção no vetor c
                k++;
                break;
            }
        }
    }

    l = 0;
    for (i = 0; i < N; i++)
    {                // uniao de a e b - junta dois vetores e elimina os repetidos
        d[i] = a[i]; // copia a para d
        l = i;       // l armazena o tamanho da string a
    }
    for (i = 0; i < N; i++)
    {               // percorre o vetor b
        existe = F; // verifica se o elemento de b existe em d
        for (j = 0; j < N; j++)
        {
            if (b[i] == d[j])
            { // se o elemento de b existe em d, ele não é adicionado a d
                existe = V;
                break;
            }
        }
        if (!existe)
        { // adicionar no vetor d apenas se ainda não tiver em d
            d[l] = b[i];
            l++;
        }
    }

    // imprime os vetores c e d
    printf("Intersecao de A e B:\n");
    for (i = 0; i < k; i++)
    {
        printf("%d ", c[i]);
    }
    printf("\n\n");

    printf("Uniao de A e B:\n");
    for (i = 0; i < l; i++)
    {
        printf("%d ", d[i]);
    }
    printf("\n");

    return 0;
}