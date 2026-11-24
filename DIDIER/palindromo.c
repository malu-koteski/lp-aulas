#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_TAM 1024

int main() {
  char entrada[MAX_TAM];
  char limpa[MAX_TAM];
  int len = 0;

  if (fgets(entrada, sizeof(entrada), stdin) == NULL) {
    return 0;
  }

  // Mantém só letras e dígitos, em minúsculas
  for (int i = 0; entrada[i] != '\0'; i++) {
    unsigned char c = (unsigned char)entrada[i];
    if (isalnum(c)) {
      limpa[len++] = (char)tolower(c);
    }
  }
  limpa[len] = '\0';

  // Compara as extremidades
  int palindromo = 1;
  for (int i = 0, j = len - 1; i < j; i++, j--) {
    if (limpa[i] != limpa[j]) {
      palindromo = 0;
      break;
    }
  }

  if (palindromo) {
    printf("A cadeia é palíndromo.\n");
  } else {
    printf("A cadeia não é palíndromo.\n");
  }

  return 0;
}