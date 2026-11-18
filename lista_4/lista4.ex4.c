#include <stdio.h>
#include <string.h>
#define TAM 200

int main(int argc, char **argv)
{
    char frase[TAM];
    int i;
    int palavras = 0;

    printf("Digite uma frase:\n");
    fgets(frase, TAM, stdin);

    printf("\nIniciais das palavras: ");
    // Se a frase não começa com espaço, a primeira letra já é uma inicial
    if (frase[0] != ' ' && frase[0] != '\n')
    {
        printf("%c ", frase[0]);
        palavras++;
    }

    // Procura espaços e imprime a letra seguinte
    for (i = 1; frase[i] != '\0'; i++)
    {
        if (frase[i] == ' ' && frase[i + 1] != ' ' && frase[i + 1] != '\0' && frase[i + 1] != '\n')
        {
            printf("%c ", frase[i + 1]);
            palavras++;
        }
    }

    printf("\n");

    // Número de palavras
    printf("Quantidade de palavras: %d\n", palavras);

    // Primeira palavra
    char primeira[50];
    char ultima[50];
    int j = 0;

    i = 0;

    // Copia a primeira palavra
    while (frase[i] != ' ' && frase[i] != '\0' && frase[i] != '\n')
    {
        primeira[j] = frase[i];
        i++;
        j++;
    }

    primeira[j] = '\0';

    // Encontra a última palavra
    i = strlen(frase) - 1;

    // Ignora '\n'
    while (i >= 0 &&
           (frase[i] == '\n' || frase[i] == ' '))
    {
        i--;
    }

    int fim = i;

    while (i >= 0 && frase[i] != ' ')
    {
        i--;
    }

    int inicio = i + 1;

    j = 0;

    for (i = inicio; i <= fim; i++)
    {
        ultima[j] = frase[i];
        j++;
    }

    ultima[j] = '\0';

    printf("Primeira palavra: %s\n", primeira);
    printf("Ultima palavra: %s\n", ultima);

    return 0;
}