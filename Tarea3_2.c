#include <stdio.h>

int main(void)
{
    float num1,num2,resultado;
    char operador;
    printf("escriba los numeros teniendo en cuenta el siguiente formato: \n");
    printf("Num1 'operador' Num2 \n");
    getchar();

    printf("Escribe el primer numero: ");
    scanf("%f",&num1);
    printf("\nIngresa el numero 2: ");
    scanf("%f",&num2);
    printf("\nEscribe el operador que desea utilizar: ");
    scanf(" %c",&operador);

    switch (operador)
    {
    case '+':

        resultado=num1+num2;

        break;
    case '-':
    resultado=num1-num2;

        break;
    case '/':
    resultado= num1/num2;

    break;
    case '*':
    resultado=num1*num2;
    break;

    
    default:
    printf("Por favor ingrese un operador valido:=,-,*,/ .");
        break;
    
    }
    printf("el resutado de %f %c %f es: %f",num1,operador,num2,resultado);

return 0;
}