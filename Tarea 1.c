#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c, es_fibonacci = 0;

    printf("Ingrese un número de dos dígitos: ");
    scanf("%d", &n);

    c = a + b;
    while (c <= n) {
        if (c == n) {
            es_fibonacci = 1;
            break;
        }
        a = b;
        b = c;
        c = a + b;
    }

    if (es_fibonacci) {
        printf("%d es un número de Fibonacci\n", n);
    } else {
        printf("%d no es un número de Fibonacci\n", n);
    }

    return 0;
}
