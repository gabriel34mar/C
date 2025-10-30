#include <stdio.h>
#include <assert.h> // Inclusión de la librería para usar assert

// Función para calcular el factorial de un número
unsigned long long factorial(int n) 
{
    assert(n >= 0); // Verificar que el número es no negativo
    if (n == 0) return 1; // El factorial de 0 es 1
    return n * factorial(n - 1); // Llamada recursiva para calcular el factorial
}

int main(void) 
{
    int number; // Variable para almacenar el número ingresado

    printf("Introduce un numero entero no negativo: ");
    scanf("%d", &number); // Solicitar al usuario que ingrese un número

    unsigned long long result = factorial(number); // Calcular el factorial
    printf("El factorial de %d es: %llu\n", number, result); // Mostrar el resultado

    return 0; // Fin del programa
}
