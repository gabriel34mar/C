#include <stdio.h>

int main(void) {
    int a, b;

    // Solicitar al usuario el primer número
    printf("Ingrese el primer número: ");
    scanf("%d", &a);

    // Solicitar al usuario el segundo número
    printf("Ingrese el segundo número: ");
    scanf("%d", &b);

    // Mostrar los valores antes del intercambio
    printf("Antes del intercambio:\n");
    printf("a = %d, b = %d\n", a, b);

    // Intercambiar los valores utilizando operaciones bitwise (XOR)
    a = a ^ b; // Paso 1: a contiene a ^ b
    b = a ^ b; // Paso 2: b = (a ^ b) ^ b = a
    a = a ^ b; // Paso 3: a = (a ^ b) ^ a = b

    // Mostrar los valores después del intercambio
    printf("Después del intercambio:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
