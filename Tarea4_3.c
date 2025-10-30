#include <stdio.h>

int main(void) 
{
    int arr[10];  // Declaro un array de tamano 10
    int i, j, temp;

    // Solicito al usuario que ingrese 10 numeros enteros positivos
    for (i = 0; i < 10; i++) 
    {
        printf("Ingresa un numero entero positivo [%d/10]: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Implemento el algoritmo de ordenamiento por seleccion para ordenar en orden ascendente
    for (i = 0; i < 9; i++) 
    {
        for (j = i + 1; j < 10; j++) 
        {
            if (arr[i] > arr[j]) 
            {
                // Intercambio los elementos si no estan en el orden correcto
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Imprimo el array ordenado, un numero por linea
    printf("Array ordenado en orden ascendente:\n");
    for (i = 0; i < 10; i++) 
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}
