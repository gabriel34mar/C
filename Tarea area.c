#include <stdio.h>

int main(void)
{
    float area,ancho,largo;
    printf("Escriba el ancho del rectangulo en metros ");
    scanf("%f",&ancho);
    printf("Escriba el largo del rectangulo en metros ");
    scanf("%f", &largo);
    area= ancho*largo;
    printf("El area es de %f m^2",area);
    return 0;
}