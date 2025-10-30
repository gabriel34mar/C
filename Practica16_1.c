#include <stdio.h>

#define PI 3.14159  // Defino la constante PI para calculos relacionados con circulos

int main (void)
{
    float radio, area, circunferencia;

    // Solicito al usuario que ingrese el radio del circulo
    printf("Escribe el radio del circulo (recuerda que el radio es = a D/2) \n");
    scanf("%f", &radio);  // Uso & para obtener la direccion de la variable radio

    // Calculo el area del circulo usando la formula A = PI * r^2
    area = PI * radio * radio;

    // Calculo la circunferencia del circulo usando la formula C = 2 * PI * r
    circunferencia = 2 * PI * radio;

    // Imprimo el area calculada
    printf("El area es igual a '%f'\n", area);

    // Imprimo la circunferencia calculada
    printf("La circunferencia es igual a '%f'\n", circunferencia);
    
    // Finalizo el programa
    return 0;
}
