#include <stdio.h>

int main() {
    int num, count = 0, digito;

    printf("Ingrese un número entero: ");
    scanf("%d", &num);

    while (num != 0) {
        digito = num % 10;
        if (digito == 1) {
            count++;
        }
        num /= 10;
    }

    printf("El dígito 1 aparece %d veces en el número ingresado.\n", count);

    return 0;
}
