#include <stdio.h>

int sumArray(int *arr, int size) {
    if (size == 0) {
        return 0; // Caso base: si el tamaño del array es 0, la suma es 0
    }
    // Caso recursivo: sumo el último elemento y llamo a la función con el tamaño reducido
    return arr[size - 1] + sumArray(arr, size - 1);
}

int main(void) {
    int size;

    // Solicito al usuario ingresar el tamaño del arreglo
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &size);

    // Verifico que el tamaño sea positivo
    if (size <= 0) {
        printf("El tamaño del arreglo debe ser mayor a 0.\n");
        return 1;
    }

    int arr[size];

    // Solicito al usuario ingresar los elementos del arreglo
    printf("Ingrese los elementos del arreglo:\n");
    for (int i = 0; i < size; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Llamo a la función para sumar los elementos del arreglo
    int sum = sumArray(arr, size);

    // Muestro la suma de los elementos
    printf("La suma de los elementos del arreglo es: %d\n", sum);

    return 0;
}
