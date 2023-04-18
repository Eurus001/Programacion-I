#include <stdio.h>

int main(){
        int i, j, k;

    for (i = 1; i <= 9; i++) {
        j = (i - 1) / 3 + 1; // cálculo de la primera componente de la terna
        k = i % 3;           // cálculo de la segunda componente de la terna
        if (k == 0) {        // ajuste para cuando k es igual a cero
            k = 3;
        }
        printf("%d %d %d\n", i, j, k);
    }

    return 0;
}