#include <stdio.h>

typedef struct
{
    int ra;
    char nome[100];
    float nota1, nota2, nota3;
} Aluno;

int main(int argc, char **argv)
{

    Aluno alunos[5];
    int i;

    int maiorNotaP1 = 0, maiorMedia = 0, menorMedia = 0;
    float media;

    for (i = 0; i < 5; i++)
    {
        printf("Insira os dados do aluno %d\n", i + 1);

        printf("Insira o RA: \n");
        scanf("%d", &alunos[i].ra);

        printf("Insira o nome do aluno:\n");
        scanf(" %[^\n]", alunos[i].nome);

        printf("Insira a nota da primeira prova:\n");
        scanf("%f", &alunos[i].nota1);

        printf("Insira a nota da segunda prova:\n");
        scanf("%f", &alunos[i].nota2);

        printf("Insira a nota da terceira prova:\n");
        scanf("%f", &alunos[i].nota3);
    }

    for (i = 1; i < 5; i++)
    {
        if (alunos[i].nota1 > alunos[maiorNotaP1].nota1)
        {
            maiorNotaP1 = i;
        }

        media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;

        if (media > (alunos[maiorMedia].nota1 + alunos[maiorMedia].nota2 + alunos[maiorMedia].nota3) / 3)
        {
            maiorMedia = i;
        }

        if (media < (alunos[menorMedia].nota1 + alunos[menorMedia].nota2 + alunos[menorMedia].nota3) / 3)
        {
            menorMedia = i;
        }
    }

    printf("O aluno com maior nota na prova 1 foi %s\n", alunos[maiorNotaP1].nome);
    printf("O aluno que teve a maior media foi: %s\n", alunos[maiorMedia].nome);
    printf("O aluno que teve a menor media foi: %s\n", alunos[menorMedia].nome);

    for (i = 0; i < 5; i++)
    {
        media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;
        printf("O aluno %s teve média = %.2f.\n", alunos[i].nome, media);
        if (media >= 6)
        {
            printf("Aluno APROVADO.\n");
        }
        else
        {
            printf("Aluno REPROVADO.\n");
        }
    }

    return 0;
}