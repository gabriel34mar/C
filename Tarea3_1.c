#include <stdio.h>

int main(void)
{
    int num1,num2,num3,mayor;
    //solicitar numeros
    printf("\nEscribe el primer numero: ");
    scanf("%d",&num1);
    printf("\nEscribe el segundo numero: ");
    scanf("%d",&num2);
    printf("\nEscribe el tercer numero: ");
    scanf("%d",&num3);
    //Define de cual es mayor y menor
    if (num1 >= num2 && num1 >= num3)
    {
        mayor = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        mayor = num2;
    } else {
        mayor = num3;
    }
    printf("el numero mayor es: %d",mayor);
    return 0;
}