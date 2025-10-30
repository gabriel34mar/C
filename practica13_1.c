#include <stdio.h>

// Función recursiva para calcular el factorial de un número
unsigned int factorial(int n) {
    // Caso base: el factorial de 0 es 1
    if (n == 0) {
        return 1;
    } else {
        // Caso recursivo: n! = n * (n-1)!
        return n * factorial(n - 1);
    }
}

int main(void) {
    int numero;

    // Solicitar al usuario que ingrese un número
    printf("Ingrese un numero para calcular su factorial: ");
    scanf("%d", &numero);

    // Validar si el número es no negativo
    if (numero < 0) {
        printf("El factorial no esta definido para numeros negativos.\n");
    } else {
        // Calcular y mostrar el factorial
        printf("El factorial de %d es %d\n", numero, factorial(numero));
    }

    return 0;
}

