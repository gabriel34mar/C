#include <stdio.h>

int main(void)
{
    int num, count;
    count=0;

    do {
        printf("Ingrese un numero entero (negativo para salir): ");
        scanf("%d", &num);

        if (num >= 0) 
        {
            count++;
        }

    } while (num >= 0);

    printf("Cantidad de numeros positivos ingresados: %d\n", count - 1);

    return 0;
}
