#include <stdio.h>
#include <string.h>
#include <ctype.h>

int tamanhoMaiorPalavra (const char *frase) {
    int i, tamMaior = 0, tamAtual = 0;
    for (i=0; frase[i] != '\0'; i++) {
        if (isspace(frase[i])) {
            if (tamAtual > tamMaior) {
                tamMaior = tamAtual;
            }
            tamAtual=0;
        } else {
            tamAtual++;
        }
    }

    if (tamAtual > tamMaior) {
        tamMaior = tamAtual;
    }
    return tamMaior;
}

void inverterPalavra (char *inicioFrase, char *fimFrase) {
    char aux;
    while (inicioFrase < fimFrase) {
        aux = *inicioFrase;
        *inicioFrase = *fimFrase;
        *fimFrase = aux;
        inicioFrase++;
        fimFrase--;
    }
}

void inverterPalavrasString (char *frase) {
    char *inicioFrase = NULL;
    char *tempoFrase = frase;
    while (*tempoFrase != '\0') {
        if (isspace(*tempoFrase)) {
            if (inicioFrase != NULL) {
                inverterPalavra(inicioFrase, tempoFrase-1);
                inicioFrase = NULL;
            }
        } else {
            if (inicioFrase == NULL) {
                inicioFrase = tempoFrase;
            }
        }
        tempoFrase++;
    }
    if (inicioFrase != NULL) {
        inverterPalavra(inicioFrase, tempoFrase-1);
    }
    inverterPalavra(frase, tempoFrase-1);
}

void invertePalavrasStringVsDois (char str[]) {
    int i;
    int inicio=0;
    int tam=strlen(str);
    for (i = 0; i <= tam; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            inverterFrase(str, inicio, i-1);
            inicio=i+1;
        }
    }
}

/* Implemente um programa que tenha:

● Uma função que receba uma string como parâmetro e
retorne o tamanho da maior palavra contida na string.

● Uma função que receba uma string como parâmetro e
inverta as palavras dessa string. Após a chamada
dessa função, a string deverá estar com as palavras
invertidas. */