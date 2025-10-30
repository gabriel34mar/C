#include <stdio.h>

// Función multiplicar que toma dos enteros y devuelve el producto
int multiplicar(int a, int b); 


int main(void)
 {
    // Inicialización de dos variables enteras con valores positivos
    int num1 = 5, num2 = 7;

    // Llamada a la función multiplicar dentro de printf
    printf("El resultado de multiplicar %d y %d es: %d\n", num1, num2, multiplicar(num1, num2));

    return 0;
}

// Función multiplicar que toma dos enteros y devuelve el producto
int multiplicar(int a, int b) 
{
    
    return a * b;
} 
