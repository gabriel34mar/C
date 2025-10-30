#include <stdio.h>


int contarVocales(char *cadena) ;

int main(void) 
{
    // Declarar una cadena con el valor "Universidad Mondragon"
    char cadena[] = "Universidad Mondragon";
    
    // Contar y mostrar el numero de vocales en la cadena
    int numeroDeVocales = contarVocales(cadena);
    printf("El numero de vocales en \"%s\" es: %d\n", cadena, numeroDeVocales);

    return 0;
}

// Funcion para contar el numero de vocales en una cadena usando punteros
int contarVocales(char *cadena) 
{
    int contador = 0;
    char *ptr = cadena;
    
    // Recorrer la cadena usando el puntero
    while (*ptr != '\0') {
        // Verificar si el caracter es una vocal
        if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u' ||
            *ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U') {
            contador++;
        }
        ptr++; // Avanzar el puntero al siguiente caracter
    }

    return contador;
}

