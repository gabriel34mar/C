#include <stdio.h>

int main(void) 
{
    double num1, num2, result;
    char operator;
    
    // Solicito los dos numeros al usuario
    printf("Ingresa el primer numero: ");
    scanf("%lf", &num1);
    
    printf("Ingresa el segundo numero: ");
    scanf("%lf", &num2);
    
    // Bucle para asegurarse de que el operador sea valido
    do {
        printf("Ingresa un operador valido (+, -, *, /): ");
        scanf(" %c", &operator);
    } while (operator != '+' && operator != '-' && operator != '*' && operator != '/');
    
    // Si el operador es '/', se verifica que el divisor no sea 0
    if (operator == '/') {
        while (num2 == 0) {
            printf("Division entre cero no permitida. Ingresa un nuevo divisor: ");
            scanf("%lf", &num2);
        }
    }
    
    // Realizo la operacion en base al operador ingresado
    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
    }
    
    // Imprimo el resultado de la operacion
    printf("El resultado es: %lf\n", result);
    
    return 0;
}
