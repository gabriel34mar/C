#include <stdio.h>
#include <math.h> // Inclusión de la librería para funciones matemáticas

int main(void) 
{
    double number; // Variable para almacenar el número ingresado

    printf("Introduce un numero: ");
    scanf("%lf", &number); // Solicitar al usuario que ingrese un número

    // Calcular y mostrar la raíz cuadrada, valor absoluto y seno del número
    printf("Raiz cuadrada: %f\n", sqrt(number));
    printf("Valor absoluto: %f\n", fabs(number));
    printf("Seno: %f\n", sin(number));

    return 0; // Fin del programa
}
