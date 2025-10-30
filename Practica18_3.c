#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *array;
    int size = 5, i, index;

    // Inicializo el array con los valores 1, 2, 3, 4, 5
    array = (int *)malloc(size * sizeof(int));
    if (array == NULL) 
    {
        printf("Error al reservar memoria.\n");
        return 1;
    }
    
    for (i = 0; i < size; i++) 
    {
        array[i] = i + 1;
    }

    // Imprimo los elementos del array
    printf("Los elementos del array son:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Solicito al usuario el indice del elemento a eliminar
    printf("Introduce el indice del elemento a eliminar (0 - 4): ");
    scanf("%d", &index);

    // Verifico si el indice esta fuera de los limites
    if (index < 0 || index >= size) 
    {
        printf("Indice fuera de los limites.\n");
        free(array);
        return 1;
    }

    // Elimino el elemento desplazando el resto de los elementos
    for (i = index; i < size - 1; i++) 
    {
        array[i] = array[i + 1];
    }

    // Reduzco el tamaño del array
    size--;
    array = (int *)realloc(array, size * sizeof(int));
    if (array == NULL) {
        printf("Error al redimensionar memoria.\n");
        return 1;
    }

    // Imprimo los elementos del array despues de la eliminacion
    printf("Los elementos del array despues de la eliminacion son:\n");
    for (i = 0; i < size; i++) 
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Libero la memoria asignada
    free(array);

    return 0;
}
