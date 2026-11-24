#include <stdio.h>
#include <string.h>

#define MAX_ALUNOS 100
#define MAX_NOME 100

typedef struct {
  char nome[MAX_NOME];
  double nota;
} Aluno;

int main() {
    Aluno turma[MAX_ALUNOS];
    int qtd = 0;
    double soma = 0.0;
    char nome_temp[MAX_NOME];

    while (qtd < MAX_ALUNOS) {
      if (fgets(nome_temp, sizeof(nome_temp), stdin) == NULL) {
          break;
      }
      // Remove o '\n' do final
      nome_temp[strcspn(nome_temp, "\r\n")] = '\0';

      if (strcmp(nome_temp, "FIM") == 0) {
          break;
      }

      strcpy(turma[qtd].nome, nome_temp);
      scanf("%lf", &turma[qtd].nota);
      getchar(); // Limpa o '\n' deixado pelo scanf no buffer

      soma += turma[qtd].nota;
      qtd++;
    }

    if (qtd > 0) {
      double media = soma / qtd;
      printf("Média da turma: %.2f\n", media);
      printf("Alunos aprovados: ");

      int primeiro = 1;
      for (int i = 0; i < qtd; i++) {
          if (turma[i].nota >= media) {
              if (!primeiro) {
                  printf(", ");
              }
              printf("%s", turma[i].nome);
              primeiro = 0;
          }
      }
      printf("\n");
    }

  return 0;
}
