#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *array;
    int size, i;

    //solicito al usuario el array
    printf("Introduce el tamano del array: ");
    scanf(" %d",&size);

    //Reservo la memoria dinamica para el array
    array=(int *)malloc(size * sizeof(int));
    if (array==NULL)
    {
     // Mensaje de error en caso de fallo de asignación de memoria
    printf("Error al reservar memoria.\n");
    return 1;
    }

    // Inicializo el array con valores proporcionados por el usuario
    for (i = 0; i < size; i++) 
    {
    printf("Introduce el valor para el elemento %d: ", i + 1);
    scanf("%d", &array[i]);
    }
    // Imprimo los elementos del array
    printf("Los elementos del array son:\n");
    for (i = 0; i < size; i++) 
    {
        printf("%d ", array[i]);
    }
    
    printf("\n");

    // Libero la memoria asignada
    free(array);

    return 0;
}