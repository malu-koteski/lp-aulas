// Maria Luisa Koteski Bustamante de Melo 187556

#include <stdio.h>
int main(int argc, char **argv)
{
    int numero_cpf[11];
    int i, resto, num1, num2;
    int soma = 0, valor_multiplicador = 2;

    printf("Insira o seu CPF sem pontos contendo 11 digitos e com espaco entre cada digito:\n"); // recebe do usuario o cpf

    for (i = 0; i < 11; i++)
    {
        scanf("%d", &numero_cpf[i]); // joga pro vetor os digitos
    }

    for (i = 8; i >= 0; i--)
    { // calcula o primeiro digito verif apartir dos 9 primeiros digitos do cpf
        soma += numero_cpf[i] * valor_multiplicador;
        valor_multiplicador++;
    }
    resto = (soma * 10) % 11;

    // precisamos fazer com que caso o valor seja 10 (digito verificador) consideramos como 0
    if (resto == 10)
    {
        num1 = 0;
    }
    else
    {
        num1 = resto;
    }

    soma = 0;
    valor_multiplicador = 2; // precisamos reiniciar a soma e valor pq eles estavam armazenados do outro for

    for (i = 9; i >= 0; i--)
    { // agora vamos usar os 9 primeiros numeros mais o 1o digito verif
        soma += numero_cpf[i] * valor_multiplicador;
        valor_multiplicador++;
    }
    resto = (soma * 10) % 11;

    if (resto == 10)
    {
        num2 = 0;
    }
    else
    {
        num2 = resto;
    }

    // 3o digito reflete a regiao federativa
    // lsb *2 ate o primeiro digito msb*10
    // elimina os dois numeros e verifica a partir do 3 o resultado da uma soma mod 11 = digito verificador usa iteracao for
    // compara se oq vc calculou deu igual ao q ele digitou -> da certo imprime

    if (num1 == numero_cpf[9] && num2 == numero_cpf[10])
    { // se o cpf for válido nós imprimos a uf federativa correspondente ao dígito verificador
        printf("O numero de CPF inserido esta correto.\n");
        switch (numero_cpf[8])
        {
        case 0: // se o dígito for 10 assumimos que =0
            printf("Digito verificador 0 é do Rio Grande do Sul\n");
            break;
        case 1:
            printf("Digito verificador 1 eh do Distrito Federal, Goias, Mato Grosso, Mato Grosso do Sul e Tocantins.\n");
            break;
        case 2:
            printf("Digito verificador 2 eh do Amazonas, Para, Roraima, Amapa, Acre e Rondonia.\n");
            break;
        case 3:
            printf("Digito verificador 3 eh do Ceara, Maranhao e Piaui.\n");
            break;
        case 4:
            printf("Digito verificador 4 eh da Paraiba, Pernambuco, Alagoas e Rio Grande do Norte.\n");
            break;
        case 5:
            printf("Digito verificador 5 eh da Bahia e Sergipe.\n");
            break;
        case 6:
            printf("Digito verificador 6 eh de Minas Gerais.\n");
            break;
        case 7:
            printf("Digito verificador 7  eh do Rio de Janeiro e Espirito Santo.\n");
            break;
        case 8:
            printf("Digito verificador 8 eh de Sao Paulo.\n");
            break;
        case 9:
            printf("Digito verificador 9 eh do Parana e Santa Catarina.\n");
            break;
        }
    }
    else
    { // caso dígito verificador da uf seja diferente do cpf inserido
        printf("O numero de CPF eh invalido.\n");
    }

    return 0;
}