#include <stdio.h>

int main (void)
{
    int a;
    printf("Ingrese un numero positivo:\n");
    scanf("%d",&a);
    if (a>0)
    {
        printf("el numero es positivo \n");
    }
    else if (a==0)
    {
    printf("El numero es cero");
    }
    else
    {
        printf("el numero es negativo");
    }
}