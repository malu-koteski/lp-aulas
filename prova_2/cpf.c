#include <stdio.h>

int validador_cpf(int cpf[11]) {
    int i;
    int soma = 0, resto, d9, d10;

    for (i = 0; i < 9; i++) {
        soma += cpf[i] * (10 - i);
    }
    resto = (soma * 10) % 11;

    if (resto == 10) {
        resto = 0;
    }
    d9 = resto;

    if (d9 != cpf[9]) return 0;

    soma = 0;

    for (i = 0; i < 10; i++){
        soma += cpf[i] * (11 - i);
    }
    resto = (soma * 10) % 11;

    if (resto == 10) {
        resto = 0;
    }
    d10 = resto;

    if (d10 != cpf[10]) return 0;

    return 1;
}

void imprimirRegiao (int codigo_digito) {
    switch (codigo_digito) {
        case 0: printf ("Dígito verificador 0 é do Rio Grande do Sul.\n"); break;
        case 1: printf("Digito verificador 1 eh do Distrito Federal, Goias, Mato Grosso, Mato Grosso do Sul e Tocantins.\n"); break;
        case 2: printf("Digito verificador 2 eh do Amazonas, Para, Roraima, Amapa, Acre e Rondonia.\n"); break;
        case 3: printf("Digito verificador 3 eh do Ceara, Maranhao e Piaui.\n"); break;
        case 4: printf("Digito verificador 4 eh da Paraiba, Pernambuco, Alagoas e Rio Grande do Norte.\n"); break;
        case 5: printf("Digito verificador 5 eh da Bahia e Sergipe.\n"); break;
        case 6: printf("Digito verificador 6 eh de Minas Gerais.\n"); break;
        case 7: printf("Digito verificador 7  eh do Rio de Janeiro e Espirito Santo.\n"); break;
        case 8: printf("Digito verificador 8 eh de Sao Paulo.\n"); break;
        case 9: printf("Digito verificador 9 eh do Parana e Santa Catarina.\n"); break;
    }
}

int main()
{
    int cpf[11];
    int i;

    printf("Digite os 11 dígitos do CPF (sem pontos ou traços):\n");
    for (i = 0; i < 11; i++) {
        scanf("%1d", &cpf[i]);
    }

    if (validador_cpf(cpf)) {
        printf("CPF válido.\n");
        imprimirRegiao(cpf[8]);
    }
    else {
        printf("CPF inválido.\n");
    }

    return 0;
}
