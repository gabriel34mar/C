#include <stdio.h>

int main(void)
{
    //declaracion de variables
    float cel,far;
    //Se solicita al usuario la temp en Cel
    printf("Escriba la temperatura en Celsius :");
    scanf("%f",&cel);
    //Se realiza la conversion
    far=cel*9/5+32;
    //se imprime el resultado
    printf("La temperatura en farenheit es %f grados0", far);
    return 0;
}