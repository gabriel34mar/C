#include <stdio.h>

// Uso de pragma para suprimir advertencias de división por cero
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdiv-by-zero"

int main(void) {
    // Uso de pragma para paralelizar el bucle
    #pragma omp parallel for 
    for (int i = 0; i <= 1000; i++) 
    {
        printf("%d\n", i); // Imprimir numeros del 0 al 1000
    }

    // Bloque para evitar advertencia de división por cero
    {
        int a = 10;
        int b = 0;
        
        // Esto no mostrará advertencias por la división por cero
        int result = (b != 0) ? (a / b) : 0; // Evita la división por cero
        printf("Resultado de la division: %d\n", result);
    }

    #pragma GCC diagnostic pop // Restaurar advertencias anteriores
    return 0;
}
