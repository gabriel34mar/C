#include <stdio.h>
#include <stdlib.h>

// Defino la estructura para almacenar la información del estudiante
struct Estudiante 
{
    char nombre[50];
    int edad;
    float promedio;
};

int main(void) 
{
    // Reservo memoria dinámicamente para un estudiante
    struct Estudiante *estudiante = (struct Estudiante *)malloc(sizeof(struct Estudiante));
    
    if (estudiante == NULL) 
    {
        printf("No se pudo asignar memoria.\n");
        return 1;
    }

    // Solicito al usuario que ingrese los datos del estudiante
    printf("Introduce el nombre del estudiante: ");
    fgets(estudiante->nombre, 50, stdin);
    printf("Introduce la edad del estudiante: ");
    scanf("%d", &estudiante->edad);
    printf("Introduce el promedio del estudiante: ");
    scanf("%f", &estudiante->promedio);

    // Imprimo la información del estudiante
    printf("\nInformacion del estudiante:\n");
    printf("Nombre: %s", estudiante->nombre);
    printf("Edad: %d\n", estudiante->edad);
    printf("Promedio: %.2f\n", estudiante->promedio);

    // Libero la memoria asignada dinámicamente
    free(estudiante);

    return 0;
}
