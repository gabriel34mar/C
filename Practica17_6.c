#include <stdio.h>
#include <stdbool.h> // Inclusión de la librería para manejar variables booleanas

// Función que verifica si un número es par
bool isEven(int number) 
{
    return number % 2 == 0; // Retorna true si el número es par, false si es impar
}

int main(void) 
{
    int number; // Variable para almacenar el número ingresado

    printf("Introduce un numero entero: ");
    scanf("%d", &number); // Solicitar al usuario que ingrese un número

    // Verificar si el número es par o impar y mostrar el resultado
    if (isEven(number)) 
    {
        printf("El numero es par.\n");
    } 
    else 
    {
        printf("El numero es impar.\n");
    }

    return 0; // Fin del programa
}
