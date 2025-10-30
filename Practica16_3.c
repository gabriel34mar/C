#include <stdio.h>

// Defino la macro DEBUG si quieres activar la depuracion
#define DEBUG

// Funcion para calcular la suma de un arreglo de enteros
int calculateSum(int arr[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];

        #ifdef DEBUG
        // Si DEBUG esta definido, muestra la suma intermedia
        printf("DEBUG: Elemento %d agregado, suma intermedia: %d\n", arr[i], sum);
        #endif
    }

    return sum;
}

int main(void) 
{
    // Defino el arreglo con valores 1, 2, 3, 4, 5
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);  // Calculo el tamaño del arreglo

    // Calculo la suma del arreglo
    int totalSum = calculateSum(numbers, size);

    // Muestro el resultado final
    printf("El resultado final de la suma es: %d\n", totalSum);

    return 0;
}
