#include <stdio.h>

int main() {
    int num, i;

    printf("Ingrese un número entero: ");
    scanf("%d", &num);

    printf("Múltiplos de 5 entre 1 y %d:\n", num);
    for (i = 1; i <= num; i++) {
        if (i % 5 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
