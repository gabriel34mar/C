#include <stdio.h>


int main() {
    int a, b, temp; // declaracion de variables enteras y una temporal para el swap

    // Pedir dos numeros enteros al usuario
    printf("Ingrese el primer numero: ");
    scanf("%d", &a);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);

    // Imprimir valores antes del intercambio
    printf("Antes del intercambio: a = %d, b = %d\n", a, b);

    // Intercambiar valores (swap)
    temp = a;
    a = b;
    b = temp;

    // Mostrar valores despues del intercambio
    printf("Despues del intercambio: a = %d, b = %d\n", a, b);

    return 0;
}


