// Maria Luisa Koteski Bustamante de Melo
// 187556

#include <stdio.h>
#include <string.h>

#define tamanho 10000

typedef struct
{
    char textoOriginal[tamanho];
    char textoCifrado[tamanho];
    int chaveDeslocamentoK;
} Texto;

void criptografia(int k, char *texto)
{
    while (*texto != '\0')
    {
        *texto = *texto + k;
        texto++;
    }
}

void descriptografia(int k, char *texto)
{
    while (*texto != '\0')
    {
        *texto = *texto - k;
        texto+ ;
    }
}

int tamanhoTexto(char texto[], int i)
{
    if (texto[i] == '\0')
    {
        return 0;
    }
    return 1 + tamanhoTexto(texto, i + 1);
}

void frequenciaLetras(char texto[], int frequencia[])
{
    int i;
    for (i = 0; i < 26; i++)
    {
        frequencia[i] = 0;
    }
    for (i = 0; texto[i] != '\0'; i++)
    {
        if (texto[i] >= 'a' && texto[i] <= 'z')
        {
            frequencia[texto[i] - 'a']++;
        }
        else if (texto[i] >= 'A' && texto[i] <= 'Z')
        {
            frequencia[texto[i] - 'A']++;
        }
    }
}

int letraQueMaisAparece(int frequencia[])
{
    int i;
    int maior = 0;
    for (i = 1; i < 26; i++)
    {
        if (frequencia[i] > frequencia[maior])
        {
            maior = i;
        }
    }
    return maior;
}

int ataqueCriptoanalise(char texto[])
{
    int frequencia[26];
    int indiceMaior;
    int k;
    frequenciaLetras(texto, frequencia);
    indiceMaior = letraQueMaisAparece(frequencia);
    k = indiceMaior;
    return k;
}

int main(int argc, char **argv)
{
    Texto texto;
    int chaveDescoberta;

    printf("Insira o texto original:\n");
    fgets(texto.textoOriginal, tamanho, stdin);

    printf("Insira a chave de deslocamento k: ");
    scanf("%d", &texto.chaveDeslocamentoK);

    strcpy(texto.textoCifrado, texto.textoOriginal);
    criptografia(texto.chaveDeslocamentoK, texto.textoCifrado);

    printf("\nTexto cifrado:\n%s", texto.textoCifrado);
    printf("\nTamanho do texto: %d caracteres\n", tamanhoTexto(texto.textoOriginal, 0));

    chaveDescoberta = ataqueCriptoanalise(texto.textoCifrado);

    printf("Chave estimada pela criptoanalise: %d\n", chaveDescoberta);

    descriptografia(texto.chaveDeslocamentoK, texto.textoCifrado);

    printf("Texto decifrado:\n%s", texto.textoCifrado);

    return 0;
}