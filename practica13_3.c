#include <stdio.h>

int isPrime(int number, int divisor) {
    // Caso base: si el divisor es mayor que la raíz cuadrada del número, es primo
    if (divisor * divisor > number) {
        return 1; // 1 representa verdadero
    }

    // Si el número es divisible por el divisor, no es primo
    if (number % divisor == 0) {
        return 0; // 0 representa falso
    }

    // Llamada recursiva con el siguiente divisor
    return isPrime(number, divisor + 1);
}

int main() {
    int number;

    // Solicitar al usuario un número
    printf("Ingrese un número: ");
    scanf("%d", &number);

    // Verificar si el número es primo
    if (isPrime(number, 2)) {
        printf("%d es un número primo.\n", number);
    } else {
        printf("%d no es un número primo.\n", number);
    }

    return 0;
}