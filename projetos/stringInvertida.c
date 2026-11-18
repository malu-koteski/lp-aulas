#include <stdio.h>
#include <string.h>

void inverte(char str[], int inicio, int fim) {
    char aux;
    while (inicio<fim) {
        aux=str[inicio];
        str[inicio]=str[fim];
        str[fim]=aux;
        inicio++;
        fim--;
    }
}
void invertePalaveas(char str[]) {
    int i;
    int inicio=0;
    int tam=strlen(str);
    for (i = 0; i <= tam; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            inverte(str, inicio, i-1);
            inicio=i+1;
        }
    }
}

int main(int argc, char *argv) {
    char str[100];
    printf("Digite uma frase: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")]='\0';
    invertePalaveas(str);
    printf("A frase invertida eh: %s\n", str);
    return 0;
}