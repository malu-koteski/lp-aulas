#include <stdio.h>
#include <string.h>

int contaPalavras(char s[])
{
    int i = 0;
    int palavras = 0;

    while (s[i] != '\0')
    {
        if ((i == 0 && s[i] != ' ') ||
            (s[i] != ' ' && s[i - 1] == ' '))
            palavras++;
        i++;
    }
    return palavras;
}

void separaPalavras(char s[], char m[][100])
{

    int i = 0;
    int linha = 0;
    int coluna = 0;
    while (s[i] != '\0')
    {
        if (s[i] != ' ')
        {
            m[linha][coluna] = s[i];
            coluna++;
        }
        else
        {
            m[linha][coluna] = '\0';
            linha++;
            coluna = 0;
        }
        i++;
    }
    m[linha][coluna] = '\0';
}

int main()
{
    char s[200];
    int i;

    printf("Digite uma frase: ");
    fgets(s, 200, stdin);

    s[strcspn(s, "\n")] = '\0';

    int n = contaPalavras(s);

    printf("\nNumero de palavras: %d\n", n);

    char m[n][100];

    separaPalavras(s, m);

    printf("\nPalavras separadas:\n");

    for (i = 0; i < n; i++)
    {
        printf("%s\n", m[i]);
    }

    return 0;
}