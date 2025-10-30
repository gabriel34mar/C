#include <stdio.h>

// Defino la macro para calcular la raiz cuadrada usando Newton-Raphson
#define SQRT(x) ({ \
    double guess = (x) / 2.0; /* Empiezo con una suposicion inicial */ \
    for (int i = 0; i < 10; i++) { \
        guess = (guess + (x) / guess) / 2.0; /* Aplico Newton-Raphson */ \
    } \
    guess; \
})

// Defino macros para obtener el maximo y el minimo
#define Max (x > y)
#define Min (x < y)

int main(void)
{
    float x, y, numero, resultado;
    int opcion;

    // Solicito al usuario que ingrese dos numeros
    printf("Introduce dos numeros (x e y): ");
    scanf("%f %f", &x, &y);

    // Solicito al usuario que elija una operacion
    printf("Elige una operacion: \n");
    printf("1. Calcular la raiz cuadrada de un numero\n");
    printf("2. Encontrar el maximo entre x e y\n");
    printf("3. Encontrar el minimo entre x e y\n");
    scanf("%d", &opcion);

    // Uso un switch para manejar las opciones
    switch (opcion) {
        case 1:
            // Solicito al usuario que ingrese un numero para la raiz cuadrada
            printf("Introduce un numero para calcular su raiz cuadrada: ");
            scanf("%f", &numero);
            if (numero < 0) 
            {
                printf("No se puede calcular la raiz cuadrada de un numero negativo.\n");
            } 
            else 
            {
                resultado = SQRT(numero);
                printf("La raiz cuadrada de %.2f es %.5f\n", numero, resultado);
            }
            break;

        case 2:
            // Comparo x e y para encontrar el maximo
            if (Max) 
            {
                printf("El maximo es %f\n", x);
            } 
            else 
            {
                printf("El maximo es %f\n", y);
            }
            break;

        case 3:
            // Comparo x e y para encontrar el minimo
            if (Min) 
            {
                printf("El minimo es %f\n", x);
            } 
            else
            {
                printf("El minimo es %f\n", y);
            }
            break;

        default:
            // Manejo de opcion invalida
            printf("Opcion invalida.\n");
            break;
    }

    return 0;
}


