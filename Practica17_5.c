#include <stdio.h>
#include <limits.h> // Inclusión de la librería para límites de tipos de datos

int main(void) 
{
    // Mostrar los límites de diferentes tipos de datos
    printf("Limites de tipos de datos:\n");
    printf("int: %d a %d\n", INT_MIN, INT_MAX); // Límites de int
    printf("char: %d a %d\n", CHAR_MIN, CHAR_MAX); // Límites de char
    printf("long: %ld a %ld\n", LONG_MIN, LONG_MAX); // Límites de long
    printf("float: %e a %e\n", FLT_MIN, FLT_MAX); // Límites de float

    return 0; // Fin del programa
}
