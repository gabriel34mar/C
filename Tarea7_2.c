#include <stdio.h>

// Declaracion de la estructura Fecha
struct Fecha 
{
    int day;
    int mes;
    int año;
};

// Declaracion de la funcion differenceInDays
int differenceInDays(struct Fecha *fecha1, struct Fecha *fecha2);

// Funcion para determinar si un año es bisiesto
int esBisiesto(int año);

// Funcion para calcular el numero total de dias desde el 01/01/0000
int diasTotalesDesdeInicio(struct Fecha *fecha);

int main(void) 
{
    // Declaramos dos variables tipo Fecha para las fechas ingresadas
    struct Fecha fecha1, fecha2;

    // Pedimos al usuario que ingrese las dos fechas
    printf("Ingrese la primera fecha (DD MM YYYY): ");
    scanf("%d %d %d", &fecha1.day, &fecha1.mes, &fecha1.año);

    printf("Ingrese la segunda fecha (DD MM YYYY): ");
    scanf("%d %d %d", &fecha2.day, &fecha2.mes, &fecha2.año);

    // Calculamos la diferencia en dias y mostramos el resultado
    int diferencia = differenceInDays(&fecha1, &fecha2);
    printf("La diferencia en dias es: %d\n", diferencia);

    return 0;
}

// Funcion que calcula la diferencia en dias entre dos fechas
int differenceInDays(struct Fecha *fecha1, struct Fecha *fecha2) 
{
    int dias1 = diasTotalesDesdeInicio(fecha1);
    int dias2 = diasTotalesDesdeInicio(fecha2);

    // Devolvemos la diferencia absoluta entre los dias
    return dias1 > dias2 ? dias1 - dias2 : dias2 - dias1;
}

// Funcion que determina si un año es bisiesto
int esBisiesto(int año) 
{
    if ((año % 4 == 0 && año % 100 != 0) || (año % 400 == 0)) {
        return 1;
    }
    return 0;
}

// Arreglo con el numero de dias en cada mes (indexado de 0 a 11)
int diasPorMes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

// Funcion que calcula el numero total de dias desde el 01/01/0000
int diasTotalesDesdeInicio(struct Fecha *fecha) 
{
    int totalDias = fecha->año * 365 + fecha->day;

    // Agregamos los dias de los meses anteriores en el año actual
    for (int i = 0; i < fecha->mes - 1; i++) 
    {
        totalDias += diasPorMes[i];
    }

    // Sumamos un dia por cada año bisiesto anterior
    for (int i = 0; i < fecha->año; i++) 
    {
        if (esBisiesto(i)) {
            totalDias++;
        }
    }

    // Si el año actual es bisiesto y la fecha es posterior a febrero, sumamos un dia
    if (esBisiesto(fecha->año) && fecha->mes > 2) 
    {
        totalDias++;
    }

    return totalDias;
}


