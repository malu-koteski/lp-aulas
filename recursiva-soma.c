#include <stdio.h>

int soma(int numero)
{
    if (numero <= 1)
    {
        return numero;
    }
    else
    {
        return numero + soma(numero - 1);
    }
}

int fatorial(int numero)
{
    if (numero <= 1)
    {
        return numero;
    }
    else
    {
        return numero * fatorial(numero - 1);
    }
}

int potencia(int base, int expoente)
{ // p = b elevado exp
    if (expoente == 0)
    {
        return 1;
    }
    else
    {
        return base * potencia(base, expoente - 1);
    }
}

void binario(int numero)
{
    if (numero > 1)
    {
        binario(numero / 2);
    }
    printff("%d", numero % 2);
}

int main(int argc, char **argv)
{

    return 0;
}