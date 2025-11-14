#include <stdio.h>

int main() {
    int numero;
    printf ("Ingresa un número entero: ");
    scanf ("%d", &numero);

    if (numero <= 0) {
        printf ("Porfavor, ingresa un número entero que sea mayor que 0. \n");
        return 0;
    }

    long long a = 0;
    long long b = 1;
    long long cambioDeVariable;

    printf ("Serie de Fibonacci Iterativa (%d términos: \n", numero);

    for (int i = 0; i < numero; i++) {
        cambioDeVariable = b;
        b = a + b;
        a = cambioDeVariable;
    }
    printf ("\n");
    return 0;
}