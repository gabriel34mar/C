#include <stdio.h>

// Funcion para reemplazar todas las ocurrencias de un caracter por otro en una cadena
void cambiarLetras(char *cadena, char letraAReemplazar, char letraNueva);

int main(void) 
{
    // Declarar la cadena
    char cadena[] = "Universidad Mondragon";
    
    // Cambiar todas las 'i' por 'o'
    cambiarLetras(cadena, 'i', 'o');

    // Mostrar la cadena modificada
    printf("Cadena modificada: \"%s\"\n", cadena);

    return 0;
}

// Funcion para reemplazar todas las ocurrencias de un caracter por otro en una cadena
void cambiarLetras(char *cadena, char letraAReemplazar, char letraNueva) 
{
    char *ptr = cadena;

    // Recorrer la cadena usando punteros
    while (*ptr != '\0') {
        // Reemplazar el caracter si coincide con el especificado
        if (*ptr == letraAReemplazar) {
            *ptr = letraNueva;
        }
        ptr++; // Avanzar el puntero al siguiente caracter
    }
}
