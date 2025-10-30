#include <stdio.h>
// Declaro la función que convierte grados Celsius a Fahrenheit
float convertCtF( float a);

int main(void)
{
    float cel;
    // Solicito al usuario que ingrese una temperatura en grados Celsius
    printf("Ingrese la temperatura en Celsius: ");
    // Guardo el valor ingresado por el usuario en la variable 'cel'
    scanf(" %f", &cel);
    // Muestro el resultado de la conversión llamando a la función convertCtF()
    printf("La conversion de %f Celsius a Farenheit es: %f", cel, convertCtF(cel));
    return 0;
}

// Defino la función que realiza la conversión de Celsius a Fahrenheit
float convertCtF(float a)
{
    // Retorno la conversión utilizando la fórmula (C * 9/5) + 32
    return (a * 9 / 5) + 32;
}
