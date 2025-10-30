#include <stdio.h>



int main(void) 
{
    int x = 10;  // Inicializo 'x' con 10
    int y = 20;  // Inicializo 'y' con 20

    // Imprimo los valores antes de llamar a swap()
    printf("Antes del intercambio: x = %d, y = %d\n", x, y);

    // Llamo a la función swap para intercambiar los valores
    swap(&x, &y);

    // Imprimo los valores después de llamar a swap()
    printf("Después del intercambio: x = %d, y = %d\n", x, y);

    return 0;
}

// Función para intercambiar los valores de dos variables enteras
void swap(int *a, int *b) 
{
    int temp = *a;  // Almaceno el valor de 'a' en una variable temporal
    *a = *b;        // Intercambio el valor de 'b' en 'a'
    *b = temp;      // Asigno el valor almacenado en 'temp' a 'b'
}
