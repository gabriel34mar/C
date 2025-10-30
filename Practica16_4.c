#include <stdio.h>

// Definición de macros para el idioma
#define LANGUAGE ES // Cambiar esta línea a EN para mensajes en inglés
#define EN 0
#define ES 1

int main(void)
{
    #if LANGUAGE == EN
        printf("Hello World!\n"); // Mensaje en inglés
    #elif LANGUAGE == ES
        printf("Hola Mundo!\n"); // Mensaje en español
    #else
        printf("Unsupported language.\n"); // Mensaje para idiomas no soportados
    #endif

    return 0;
}
