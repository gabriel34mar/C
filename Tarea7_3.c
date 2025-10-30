#include <stdio.h>

// Definicion de la estructura Car
struct Car 
{
    int id;
    char model[20];
    double tarifaPorDia;
};

// Declaracion de la funcion calcularCosto
double calcularCosto(struct Car *car, int dias);

int main(void) 
{
    // Inicializamos los datos de los 3 automoviles
    struct Car autos[3] = {
        {1, "Versa", 2000},
        {2, "Figo", 2200},
        {3, "A3", 3500}
    };

    int diasAlquiler;

    // Pedimos al usuario que ingrese el numero de dias de alquiler
    printf("Ingrese el numero de dias de alquiler: ");
    scanf("%d", &diasAlquiler);

    // Calculamos y mostramos el costo de alquiler para cada automovil
    for (int i = 0; i < 3; i++) 
    {
        double costoTotal = calcularCosto(&autos[i], diasAlquiler);
        printf("Costo total de alquiler para el %s (ID %d) por %d dias: $%.2f\n",
      autos[i].model, autos[i].id, diasAlquiler, costoTotal);
    }

    return 0;
}

// Funcion que calcula el costo total de alquiler para un automovil
double calcularCosto(struct Car *car, int dias) 
{
    // Calculamos el costo multiplicando la tarifa diaria por el numero de dias
    return car->tarifaPorDia * dias;
}
