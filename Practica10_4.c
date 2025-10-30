#include <stdio.h>

// Funcion para contar el numero de ocurrencias de un caracter en una cadena usando punteros
int contarOcurrencias(char *cadena, char caracter) ;

int main(void) 
{
    // Inicializar la cadena con "Elefante africano"
    char cadena[] = "Elefante africano";
    
    // Llamar a la funcion para contar las ocurrencias del caracter 'e'
    int ocurrencias = contarOcurrencias(cadena, 'e');

    // Mostrar el numero de ocurrencias
    printf("El numero de ocurrencias de 'e' en \"%s\" es: %d\n", cadena, ocurrencias);

    return 0;
}

int contarOcurrencias(char *cadena, char caracter)
{
    int contador = 0;
    char *ptr = cadena;

    // Recorrer la cadena usando el puntero
    while (*ptr != '\0') {
        // Contar si el caracter actual coincide con el caracter buscado
        if (*ptr == caracter) {
            contador++;
        }
        ptr++; // Avanzar el puntero al siguiente caracter
    }

    return contador;
}
