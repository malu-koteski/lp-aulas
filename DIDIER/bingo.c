#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_FRASE 4096

int main() {
  char linha[MAX_FRASE];
  char frase_lower[MAX_FRASE];
  int n;

  // Lê a linha inteira do N, sem depender de getchar
  if (fgets(linha, sizeof(linha), stdin) == NULL) return 0;
  if (sscanf(linha, "%d", &n) != 1) return 0;

  for (int i = 0; i < n; i++) {
    if (fgets(linha, sizeof(linha), stdin) == NULL) break;
    linha[strcspn(linha, "\r\n")] = '\0';

    int len = strlen(linha);

    // Cópia em minúsculas para procurar a palavra secreta
    for (int j = 0; j <= len; j++) {
      frase_lower[j] = (char)tolower((unsigned char)linha[j]);
    }

    if (strstr(frase_lower, "batatinha") != NULL) {
      printf("Bingo!\n");
      break;
    }

    // Vogais -> '1', espaços -> '-'
    for (int j = 0; j < len; j++) {
      char c = frase_lower[j];
      if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        linha[j] = '1';
      } else if (isspace((unsigned char)linha[j])) {
        linha[j] = '-';
      }
    }

    printf("%s\n", linha);
  }

  return 0;
}