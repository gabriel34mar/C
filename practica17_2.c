#include <stdio.h>
#include <string.h> // Inclusión de la librería para manipulación de cadenas

int main(void) 
{
    char str1[100], str2[100], concatenated[200] = "", copied[100]; // Declaración de cadenas

    // Solicitar al usuario que ingrese la primera cadena
    printf("Introduce la primera cadena: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0;  // Eliminar el salto de línea

    // Solicitar al usuario que ingrese la segunda cadena
    printf("Introduce la segunda cadena: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0;  // Eliminar el salto de línea

    // Copiar la primera cadena a la segunda
    strcpy(copied, str1);
    // Concatenar ambas cadenas
    strcat(concatenated, str1);
    strcat(concatenated, str2);

    // Mostrar la cadena copiada y la concatenada
    printf("Cadena copiada: %s\n", copied);
    printf("Cadena concatenada: %s\n", concatenated);
    // Verificar si las dos cadenas son iguales
    printf("Las cadenas son %se iguales.\n", strcmp(str1, str2) == 0 ? "" : "no ");

    return 0; // Fin del programa
}
