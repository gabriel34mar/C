#include <stdio.h>

// Definicion de la estructura datosArray
struct datosArray 
{
    int sumaArray;
    int maximoArray;
};

// Declaracion de la funcion sumaElementos
int sumaElementos(int *array, int size);

// Declaracion de la funcion valorMaximo
int valorMaximo(int *array, int size);

//iniciamos la funcion main
int main(void) 
{
    // Definimos el array de 8 elementos
    int array[8] = {45, 64, 31, 96, 56, 77, 65, 18};

    // Imprimimos el array inicial
    printf("Array inicial: ");
    for (int i = 0; i < 8; i++) 
    {
    printf("%d ", array[i]);
    }
    printf("\n");


    // Creamos  la estructura datosArray
    struct datosArray datos;

    // Calculamos la suma de los elementos y el indice del maximo valor
    datos.sumaArray = sumaElementos(array, 8);
    datos.maximoArray = valorMaximo(array, 8);

    // Imprimimos los resultados
    printf("Suma de los elementos del array: %d\n", datos.sumaArray);
    printf("Indice del valor maximo del array: %d\n", datos.maximoArray);

    return 0;
}

// Funcion que suma los elementos de un array
int sumaElementos(int *array, int size) 
{
    int suma = 0;
    for (int i = 0; i < size; i++) 
    {
        suma += array[i];
    }
    return suma;
}

// Funcion que encuentra el indice del valor maximo de un array
int valorMaximo(int *array, int size) 
{
    int maxIndex = 0;
    for (int i = 1; i < size; i++) 
    {
        if (array[i] > array[maxIndex])
        {
            maxIndex = i;
        }
    }
    return maxIndex;
}
