#include <stdio.h>

int main(void)
{
    int a,b, mayor;
    printf("Escribe el primer numero:\n");
    scanf("%d",&a);
    printf("\nEscribe el segundo numero\n");
    scanf("%d",&b);
    mayor = (a > b) ? a : b;
    printf("El numero mayor es : %d ",mayor);
}