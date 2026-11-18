#include <stdio.h>
#include <string.h>

void concatena(char a[], char b[], char c[])
{
    int i = 0, j = 0;
    while (a[i] != '\0')
    {
        c[i] = a[i];
        i++;
    }

    while (b[j] != '\0')
    {
        c[i] = b[j];
        i++;
        j++;
    }

    c[i] = '\0';
}

int compara(char a[], char b[])
{
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0')
    {
        if (a[i] != b[i])
            return 0;
        i++;
    }
    return (a[i] == '\0' && b[i] == '\0');
}

void inverte(char a[])
{
    int inicio = 0;
    int fim = strlen(a) - 1;
    char aux;

    while (inicio < fim)
    {
        aux = a[inicio];
        a[inicio] = a[fim];
        a[fim] = aux;
        inicio++;
        fim--;
    }
}

int main()
{
    char a[100];
    char b[100];
    char c[200];

    printf("Digite a string a: ");
    fgets(a, 100, stdin);
    a[strcspn(a, "\n")] = '\0';

    printf("Digite a string b: ");
    fgets(b, 100, stdin);
    b[strcspn(b, "\n")] = '\0';

    concatena(a, b, c);

    printf("\nConcatenacao: %s\n", c);

    if (compara(a, b))
        printf("As strings sao iguais\n");
    else
        printf("As strings sao diferentes\n");

    inverte(a);

    printf("String a invertida: %s\n", a);

    return 0;
}