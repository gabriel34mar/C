#include <stdio.h>

void concatenar(char *cadena1, char *cadena2, char *resultado);

int main(void)
{
    // Declarar las cadenas
    char cadena1[] = "Universidad ";  // Incluye el espacio
    char cadena2[] = "Mondragon";
    char resultado[50];  // Espacio suficiente para ambas cadenas concatenadas

    // Llamar a la funcion para concatenar las cadenas
    concatenar(cadena1, cadena2, resultado);

    // Mostrar el resultado concatenado
    printf("Resultado concatenado: \"%s\"\n", resultado);

    return 0;
}

// Funcion para concatenar dos cadenas de caracteres en una tercera usando punteros
void concatenar(char *cadena1, char *cadena2, char *resultado)
{
    // Copiar la primera cadena a la tercera usando punteros
    while (*cadena1 != '\0') {
        *resultado = *cadena1;
        resultado++;
        cadena1++;
    }
    
    // Copiar la segunda cadena a la tercera usando punteros
    while (*cadena2 != '\0') {
        *resultado = *cadena2;
        resultado++;
        cadena2++;
    }
    
    // Finalizar la cadena concatenada con el caracter nulo
    *resultado = '\0';
}
