#include <stdio.h>

// Funcion para copiar una cadena de texto a otra utilizando punteros
void copiarString(char *origen, char *destino);

int main(void) 
{
    // Inicializar la cadena origen con "String original"
    char origen[] = "String original";
    
    // Declarar la cadena destino con suficiente espacio
    char destino[50];

    // Llamar a la funcion para copiar la cadena
    copiarString(origen, destino);

    // Mostrar la cadena copiada
    printf("Cadena copiada: \"%s\"\n", destino);

    return 0;
}

void copiarString(char *origen, char *destino)
{
    // Copiar cada caracter del origen al destino usando punteros
    while (*origen != '\0') {
        *destino = *origen;  // Copiar el caracter actual
        origen++;            // Avanzar al siguiente caracter en origen
        destino++;           // Avanzar al siguiente caracter en destino
    }
    *destino = '\0';  // Finalizar la cadena destino con el caracter nulo
}
