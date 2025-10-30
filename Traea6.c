#include <stdio.h>

// Función para ordenar un array utilizando punteros
void ordenarArray(int *arr, int size) {
    int *ptr1, *ptr2, temp;
    
    // Usamos dos punteros para acceder y ordenar los elementos
    for (ptr1 = arr; ptr1 < arr + size - 1; ptr1++) {
        for (ptr2 = ptr1 + 1; ptr2 < arr + size; ptr2++) {
            // Proceso de intercambio si es necesario (procesamiento de los elementos)
            if (*ptr1 > *ptr2) {
                temp = *ptr1;
                *ptr1 = *ptr2;
                *ptr2 = temp;
            }
        }
    }
}

int main(void) {
    // Array predefinido de al menos 8 elementos
    int array[] = {42, 16, 33, 25, 12, 77, 9, 60};
    int size = sizeof(array) / sizeof(array[0]);

    // Imprimir el array original
    printf("Array original: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Ordenar el array
    ordenarArray(array, size);

    // Imprimir el array ordenado
    printf("Array ordenado: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
