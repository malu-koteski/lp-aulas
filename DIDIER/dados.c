#include <stdio.h>
#include <stdlib.h>

int main() {
    int count = 0;

    for (int i = 1; i <= 6; i++) {
        for (int j = i; j <= 6; j++) {
            for (int k = j; k <= 6; k++) {
                for (int l = k; l <= 6; l++) {
                    printf("%d, %d, %d, %d\n", i, j, k, l);
                    count++;
                }
            }
        }
    }

    printf("%d\n", count);
    return 0;
}
