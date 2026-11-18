#include <stdio.h>
#define N 100
int main(int argc, char **argv) {
    char a[N], b[N];
    fgets(a, N, stdin);
    fgets(b, N, stdin);
    int i=0, j=0, ia=0, jb=0;
    char *pa = NULL, *pb = NULL;
    do {
        j=0;
        while (a[i] && a[i] != b[j]) {
            j++;
        }
        if (a[i] == b[j]) {
            ia=i;
            jb=j;
            while (a[i] && a[i] == b[j]) {
                i++;
                j++;
            }
            if (i - ia > 1) { //verifica se existe uma substring
                pa=&a[ia]; //recebe indice e endereço de memoria da primeira letra
                pb=&b[jb];
                break;
            } 
        }
        while (a[i] && a[i] != ' ') i++;
        while (a[i] && a[i] == ' ') i++;
    } while (a[i]);
    if (pa) {
        printf("Encontra substring");
    } else {
        printf("Não há substring de a em b"\n);
    }
    

}