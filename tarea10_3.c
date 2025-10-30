#include <stdio.h>
#include <ctype.h>

// Función para convertir una cadena a minúsculas
char* toLowerCase(char* str) {
    char* ptr = str;
    // Recorro cada carácter de la cadena para convertirlo a minúsculas
    while (*ptr) {
        *ptr = tolower(*ptr);
        ptr++;
    }
    return str;
}

int main(void) {
    char cadena[100];
    
    // Solicito al usuario que introduzca una cadena de caracteres
    printf("Introduce una cadena: ");
    scanf("%s", cadena);
    
    // Convierto la cadena a minúsculas llamando a la función toLowerCase
    char* resultado = toLowerCase(cadena);
    
    // Muestro la cadena convertida 
    printf("Cadena en minúsculas: %s\n", resultado);
    
    return 0;
}
