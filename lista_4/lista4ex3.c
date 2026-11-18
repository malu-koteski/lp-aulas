#include <stdio.h>
#define N 100

int count_spaces(const char frase[])
{
    int contador = 0;
    for (int i = 0; frase[i] != '\0'; i++)
    {
        if (frase[i] == ' ')
        {
            contador++;
        }
    }
    return contador;
}

int main(int argc, char **argv)
{
    // 3) Escreva um programa que:
    // a) obtenha uma frase do usuário;
    // b) conte os espaços existentes na frase;

    char frase[N];

    printf("Entre com uma frase:\n");
    if (fgets(frase, N, stdin) == NULL)
    {
        return 1;
    }

    for (int i = 0; frase[i] != '\0'; i++)
    {
        if (frase[i] == '\n')
        {
            frase[i] = '\0';
            break;
        }
    }

    int espacos = count_spaces(frase);
    printf("A frase tem %d espacos.\n", espacos);

    return 0;
}
