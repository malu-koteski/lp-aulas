#include <stdio.h>
int main () {
    int opcao;
    double a, b, soma, subtracao;
    opcao = 0;
    while (opcao != 3) {
        printf("Digite 1-soma, 2-subtracao, 3-finalizar");

        if (scanf("%d", &opcao) != 1) {
            printf("Entrada inválida.\n");
            break;
        }

        if (opcao == 1) {
            printf("Digite um valor:");
            scanf("%lf", &a);
            printf("Digite um valor:");
            scanf("%lf", &b);
            soma = a + b;
            printf("A soma dos valores inseridos é: %2lf\n", soma);

        } else if (opcao  == 2) {
            printf("Digite um valor:");
            scanf("%lf", &a);
            printf("Digite um valor:");
            scanf("%lf", &b);
            subtracao = a - b;
            printf("A subtração dos valores inseridos é: %2lf\n", subtracao);

        } else if (opcao == 3) {
            printf("Operação finalizada");
        } else {
            printf("Operação inválida");
        }
    }
    
    return 0;
}
