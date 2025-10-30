#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

// Función para verificar si una cadena contiene solo dígitos
bool isNumeric(char* str) {
    // Recorro cada carácter de la cadena para verificar si es un dígito
    while (*str) {
        if (!isdigit(*str)) {
            return false;
        }
        str++;
    }
    return true;
}

int main(void) {
    char cadena[100];
    
    // Solicito al usuario que introduzca una cadena de caracteres
    printf("Introduce una cadena: ");
    scanf("%s", cadena);
    
    // Utilizo la función isNumeric para verificar si la cadena contiene solo dígitos
    if (isNumeric(cadena)) {
        // Muestro que la cadena contiene solo dígitos
        printf("La cadena contiene solo dígitos.\n");
    } else {
        // Muestroque la cadena no contiene solo dígitos
        printf("La cadena no contiene solo dígitos.\n");
    }
    
    return 0;
}
