#include <stdio.h>

// Declaro la funcion calculateFactorial para calcular el factorial de un numero
double calculateFactorial(int n);

int main(void) 
{
    int number;

    // Pido al usuario que ingrese un numero entero
    printf("Introduce un numero entero para calcular su factorial: ");
    scanf("%d", &number);

    // Verifico si el numero es negativo
    if (number < 0) {
        printf("El factorial no esta definido para numeros negativos.\n");
    } else {
        // Llamo a la funcion calculateFactorial() para obtener el factorial
        double result = calculateFactorial(number);

        // Muestro el resultado al usuario
        printf("El factorial de %d es: %f\n", number, result);
    }

    return 0;
}

// Defino la funcion calculateFactorial
double calculateFactorial(int n) 
{
    double factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}

