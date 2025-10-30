#include <stdio.h>
#include <stdbool.h>

// Función para verificar si un número es positivo
bool isPositive(int num) {
    // Verifico si el número es mayor que cero 
    return num > 0;
}

int main(void) {
    int num;
    
    // Solicito al usuario que introduzca un número entero
    printf("Introduce un número entero: ");
    scanf("%d", &num);
    
    // Utilizo la función isPositive para verificar si el número es positivo
    if (isPositive(num)) {
        // Muestro  que el número es positivo
        printf("El número es positivo.\n");
    } else {
        // Muestro  que el número no es positivo
        printf("El número no es positivo.\n");
    }
    
    return 0;
}

