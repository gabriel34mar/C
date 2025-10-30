#include <stdio.h>

// Definición de la enumeración "DiaDeLaSemana"
enum DiaDeLaSemana 
{
    domingo,    // 0
    lunes,      // 1
    martes,     // 2
    miercoles,  // 3
    jueves,     // 4
    viernes,    // 5
    sabado      // 6
};

int main(void) 
{
    int numero;
    enum DiaDeLaSemana dia;
    
    // Array de cadenas para representar los nombres de los días
    const char *nombresDias[] = 
    {
        "Domingo",
        "Lunes",
        "Martes",
        "Miércoles",
        "Jueves",
        "Viernes",
        "Sábado"
    };
    
    // Solicitar al usuario que ingrese un número entre 0 y 6
    printf("Ingrese un número (0-6) para representar el día de la semana: ");
    scanf("%d", &numero);
    
    // Verificar que el número esté dentro del rango válido
    if (numero < 0 || numero > 6) 
    {
        printf("Número inválido. Por favor, ingrese un número entre 0 y 6.\n");
        return 1; // Salir del programa con código de error
    }
    
    // Asignar el número ingresado a la enumeración
    dia = (enum DiaDeLaSemana)numero;
    
    // Mostrar el día correspondiente
    printf("El día correspondiente es: %s\n", nombresDias[dia]);
    
    return 0;
}
