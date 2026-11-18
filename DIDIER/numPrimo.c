#include <stdio.h>
#include <stdlib.h>

int main() {
    for (int numPrimo = 2; numPrimo <= 100; numPrimo++) {
        int ehPrimo = 1; 

        for (int i = 2; i < numPrimo; i++) {
            if (numPrimo % i == 0) {
                ehPrimo = 0; 
                break;
            }
        }

        if (ehPrimo == 1) {
            printf("%d ", numPrimo);
        }
    }

    printf("\n");
    return 0;
}
