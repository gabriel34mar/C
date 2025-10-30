#include <stdio.h>
#include <time.h> // Inclusión de la librería para trabajar con fecha y hora

int main(void) 
{
    time_t t; // Variable para almacenar el tiempo
    struct tm *tm_info; // Estructura para almacenar información de tiempo

    time(&t); // Obtener el tiempo actual
    tm_info = localtime(&t); // Convertir el tiempo a la hora local

    char buffer[26]; // Buffer para almacenar la cadena de fecha y hora
    strftime(buffer, 26, "%Y-%m-%d %H:%M:%S", tm_info); // Formatear la fecha y hora
    printf("Fecha y hora actual: %s\n", buffer); // Mostrar la fecha y hora

    return 0; // Fin del programa
}
