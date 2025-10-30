#include <stdio.h>

int main (void)
{
    //declaracion local de la s variables 
    int a,b,sum;
    //se le pide al usuario el primer numero 
    printf ("Ingrese el primer numero (solo enteros): ");
    scanf("%i",&a);
    // se le pide al usuario el segundo numero 
    printf("Ingrese el segundo numero (solo enteros): ");
    scanf("%i",&b);
    //se hace la operacion
    sum= a+b;
    // se imprime el rsultado de la operacion
    printf("La suma de %i con %i es: %i",a,b,sum);
return 0;
}