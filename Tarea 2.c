#include <stdio.h>

int es_primo(int n) {
    int i;

    if (n < 2) {
        return 0;
    }

    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int n, suma = 0, count = 0;

    do {
        printf("Ingrese un número (0 para terminar): ");
        scanf("%d", &n);

        if (n != 0 && es_primo(n)) {
            suma += n;
            count++;
        }
    } while (n != 0);

    if (count > 0) {
        double promedio = (double)suma / count;
        printf("El promedio entre los números primos leídos es %.2lf\n", promedio);
    } else {
        printf("No se leyeron números primos\n");
    }

    return 0;
}
