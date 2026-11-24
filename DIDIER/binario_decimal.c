#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int opcao;

    while (1) {
        if (scanf("%d", &opcao) != 1) {
            break;
        }

        if (opcao == 1) {
          int decimal;
          scanf("%d", &decimal);

          if (decimal == 0) {
              printf("0\n");
              continue;
          }

          char inversoBinario[65] = ""; // Guarda até 64 bits
          int pos = 0;

          // Calcula os restos de trás para frente
          while (decimal > 0) {
              int resto = decimal % 2;
              inversoBinario[pos++] = resto + '0'; // Converte 0 ou 1 para caractere '0' ou '1'
              decimal = decimal / 2;
          }

          // Imprime de trás para frente (simulando: inversoBinario = str(resto) + inversoBinario)
          for (int i = pos - 1; i >= 0; i--) {
              printf("%c", inversoBinario[i]);
          }
          printf("\n");
        }

        else if (opcao == 2) {
          char binario[65];
          scanf("%64s", binario); // Lê a string do número binário

          int tamanho = strlen(binario);
          long long decimal = 0;
          long long potencia = 1; // Representa 2^0, 2^1, 2^2...

          // Percorre a string do fim para o começo (equivalente a inverter e ler da esquerda)
          for (int i = tamanho - 1; i >= 0; i--) {
              if (binario[i] == '1') {
                  decimal += potencia;
              }
              potencia *= 2; // Próxima potência de 2
          }

          printf("%lld\n", decimal);
        }
        // 3) Sair
        else if (opcao == 3) {
          break;
        }
    }

    return 0;
}
