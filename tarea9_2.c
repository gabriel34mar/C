#include <stdio.h>

int sumDigits(int n) {
    if (n == 0) {
        return 0; // Caso base: si el número es 0, la suma de los dígitos es 0
    }
    // Caso recursivo: sumar el último dígito y llamar a la función con el número sin el último dígito
    return (n % 10) + sumDigits(n / 10);
}

int main(void) {
    int number;

    // Solicito al usuario ingresar un número entero no negativo
    printf("Ingrese un número entero no negativo: ");
    scanf("%d", &number);

    // Valido que el número sea no negativo
    if (number < 0) {
        printf("Por favor, ingrese un número no negativo.\n");
        return 1; // Finalizo si el número es negativo
    }

    // Llamo a la función para calcular la suma de los dígitos
    int result = sumDigits(number);

    // Muestro la suma de los dígitos
    printf("La suma de los dígitos es: %d\n", result);

    return 0;
}
