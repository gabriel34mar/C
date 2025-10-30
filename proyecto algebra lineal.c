/*proyecto algebra lineal */
#include <stdio.h>
#include <math.h>
#include <windows.h> 
#define M_PI 3.14159265358979323846 

// Declaración de variables
double a, matrizT[2][2], matrizX[2][1], resultado[2][1], T;

int main() {
    // Supongamos que x es una variable de tipo double
    printf("Ingresa el valor del ángulo T en grados: ");
    scanf("%lf", &T);
    T = T * M_PI / 180.0;  // Convertir a radianes

    printf("Ingresa el valor de x: ");
    scanf("%lf", &a);

    // Asignar valores a las matrices
    matrizT[0][0] = cos(T);
    matrizT[0][1] = -sin(T);
    matrizT[1][0] = sin(T);
    matrizT[1][1] = cos(T);

    matrizX[0][0] = a;
    matrizX[1][0] = a * a * a + 1;

    // Imprimir las matrices
    printf("\nMatriz T:\n");
    printf("%f\t%f\n", matrizT[0][0], matrizT[0][1]);
    printf("%f\t%f\n", matrizT[1][0], matrizT[1][1]);

    printf("\nMatriz X:\n");
    printf("%f\n", matrizX[0][0]);
    printf("%f\n", matrizX[1][0]);

    // Multiplicación de matriz transpuesta por matrizX
    resultado[0][0] = matrizT[0][0] * matrizX[0][0] + matrizT[0][1] * matrizX[1][0];
    resultado[1][0] = matrizT[1][0] * matrizX[0][0] + matrizT[1][1] * matrizX[1][0];

    // Imprimir el resultado
    printf("\nResultado de la multiplicación:\n");
    printf("%f\n", resultado[0][0]);
    printf("%f\n", resultado[1][0]);

    return 0;
}
