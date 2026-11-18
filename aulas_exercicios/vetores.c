#include <stdio.h>

int main(int argc, char **argv)
{
    float media = 0, soma = 0, notas[10];
    int i, contador = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Insira a nota do aluno %d:\n", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    media = soma / 10.0;

    printf("Média das notas dos alunos é: %.2f\n", media);

    for (i = 0; i < 10; i++)
    {
        if (notas[i] > media)
        {
            contador++;
        }
    }

    printf("Alunos com nota maior que a média %.2f: %d alunos.\n", media, contador);

    return 0;
}
