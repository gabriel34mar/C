#include <stdio.h>

int main(void) {
    char cadena[100];
    int i, contador_vocales = 0;

    // Solicito al usuario que ingrese una cadena de texto
    printf("Ingresa una cadena de texto: ");
    fgets(cadena, sizeof(cadena), stdin);  // Leo la cadena con fgets

    // Recorro la cadena y cuento las vocales, tanto mayúsculas como minúsculas
    for (i = 0; cadena[i] != '\0'; i++) {
        if (cadena[i] == 'a' || cadena[i] == 'e' || cadena[i] == 'i' || cadena[i] == 'o' || cadena[i] == 'u' ||
            cadena[i] == 'A' || cadena[i] == 'E' || cadena[i] == 'I' || cadena[i] == 'O' || cadena[i] == 'U') {
            contador_vocales++;  // Incremento el contador de vocales
        }
    }

    // Imprimo el número total de vocales encontradas en la cadena
    printf("Numero total de vocales: %d\n", contador_vocales);

    return 0;
}
 