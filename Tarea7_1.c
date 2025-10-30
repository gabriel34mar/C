#include <stdio.h>

// Declaracion de la estructura Time
struct Time 
{
    int horas;
    int minutos;
    int segundos;
};

// Declaracion de la funcion para restar dos tiempos
void restaTiempo(struct Time *t1, struct Time *t2, struct Time *resultado);

int main(void) 
{
    // Declaracion de dos variables tipo Time para almacenar las horas ingresadas por el usuario
    struct Time tiempo1, tiempo2, resultado;

    // Pedimos al usuario que ingrese las horas
    printf("Ingrese la primera hora (HH MM SS): ");
    scanf("%d %d %d", &tiempo1.horas, &tiempo1.minutos, &tiempo1.segundos);

    printf("Ingrese la segunda hora (HH MM SS): ");
    scanf("%d %d %d", &tiempo2.horas, &tiempo2.minutos, &tiempo2.segundos);

    // Llamada a la funcion para restar los tiempos
    restaTiempo(&tiempo1, &tiempo2, &resultado);

    // Mostrar el resultado en formato HH:MM:SS 
    printf("La diferencia es: %02d:%02d:%02d\n", resultado.horas, resultado.minutos, resultado.segundos);

    return 0;
}

// Funcion que resta dos tiempos y almacena el resultado
void restaTiempo(struct Time *t1, struct Time *t2, struct Time *resultado) 
{
    // Resto los segundos
    if (t1->segundos < t2->segundos) {
        t1->segundos += 60;
        t1->minutos--;
    }
    resultado->segundos = t1->segundos - t2->segundos;

    // Resto los minutos
    if (t1->minutos < t2->minutos) {
        t1->minutos += 60;
        t1->horas--;
    }
    resultado->minutos = t1->minutos - t2->minutos;

    // Resto las horas
    resultado->horas = t1->horas - t2->horas;

}
