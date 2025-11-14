#include <stdio.h>

long long fibonacci(int numero) {
    if (numero == 0) return 0;
    if (numero == 1) return 1;
    return fibonacci(numero - 1) + fibonacci(numero - 2);
}

int main() {
    int numero;

    printf("Ingrese un número entero para el número de términos de la serie Fibonacci: ");
    scanf("%d", &numero);

    if (numero <=0) {
        printf("Porfavor, debe ingresar un número entero y mayor que 0.");
        return 0;
    }
    printf ("Serie de Fibonacci (%d términos: \n");

    for (int i = 1; i <= numero; i++) {
        printf("%lld\n", fibonacci(i));
    }
    printf ("\n");
    return 0;
}
