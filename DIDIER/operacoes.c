#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_LINHA 1024

void minusculo(char *str) {
  for (int i = 0; str[i]; i++) {
    str[i] = tolower((unsigned char)str[i]);
  }
}

int main() {
  while (1) {
    char valores[MAX_LINHA];
  
    if (fgets(valores, sizeof(valores), stdin) == NULL) {
      break;
    }

    valores[strcspn(valores, "\r\n")] = '\0';

    double maior = 0.0;
    double menor = 0.0;
    double soma = 0.0;

    char *token = strtok(valores, " \t");
    int sair = 0;
    int firstTime = 1;
    
    char inversa[MAX_LINHA] = "";
    char temp_inversa[MAX_LINHA];
    char num_str[50];            

    while (token != NULL) {
      char token_lower[MAX_LINHA];
      strcpy(token_lower, token);
      minusculo(token_lower);

      if(strcmp(token_lower, "sair") == 0) {
        sair = 1;
        break;
      }

      double numAtual = atof(token);

      if (firstTime == 1) {
        maior = numAtual;
        menor = numAtual;

        sprintf(inversa, "%.1f", numAtual); // 3. Padronizado para %.1f
        firstTime = 0;
      } else {
        if (numAtual > maior) {
          maior = numAtual;
        } else if (numAtual < menor) {
          menor = numAtual;
        }

        sprintf(num_str, "%.1f", numAtual);
        strcpy(temp_inversa, num_str);
        strcat(temp_inversa, ", ");
        strcat(temp_inversa, inversa);
        strcpy(inversa, temp_inversa);
      }

      soma = soma + numAtual;
      token = strtok(NULL, " \t");
    }

    if (sair) {
      printf("fim\n");
      break;
    }

    if (!firstTime) {
      printf("Valor máximo: %.1f\n", maior);
      printf("Valor mínimo: %.1f\n", menor);
      printf("Soma dos elementos: %.1f\n", soma);
      printf("String em ordem inversa: %s\n", inversa);
    }
  }
  return 0;
}
