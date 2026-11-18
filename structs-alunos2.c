#include <stdio.h>

typedef struct
{
    int ra;
    char nome[100];
    float media_final;
} Aluno;

int main(int argc, char **argv)
{

    Aluno alunos[10];
    Aluno aprovado[10];
    Aluno reprovado[10];

    int i;

    for (i = 0; i < 10; i++)
    {
        printf("Insira os dados do aluno %d:\n", i + 1);

        printf("Insira o ra:\n");
        scanf("%d", &alunos[i].ra);

        printf("Insira o nome:\n");
        scanf(" %[^\n]", alunos[i].nome);

        printf("Insira a média final:\n");
        scanf("%f", &alunos[i].media_final);
    }

    int qtdaprovado = 0, qtdreprovado = 0;

    for (i = 0; i < 10; i++)
    {
        if (alunos[i].media_final >= 6.0)
        {
            aprovado[qtdaprovado] = alunos[i];
            qtdaprovado++;
        }
        else
        {
            reprovado[qtdreprovado] = alunos[i];
            qtdreprovado++;
        }
    }

    for (i = 0; i < qtdaprovado; i++)
    {
        printf("Nome: %s\n", aprovado[i].nome);
    }

    for (i = 0; i < qtdreprovado; i++)
    {
        printf("Nome: %s\n", reprovado[i].nome);
    }

    return 0;
}