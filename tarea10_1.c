#include <stdio.h>
#include <assert.h>

// Función para realizar la división de dos enteros
float divide(int a, int b) {
    // Me aseguro de que el divisor no sea cero para evitar problemas de contacto
    assert(b != 0);
    return (float)a / b;
}

int main(void) {
    int num1, num2;
    
    // Solicito al usuario que introduzca el dividendo
    printf("Introduce el dividendo: ");
    scanf("%d", &num1);
    
    // Solicito al usuario que introduzca el divisor
    printf("Introduce el divisor: ");
    scanf("%d", &num2);
    
    // Realizo la división llamando a la función divide
    float resultado = divide(num1, num2);
    
    // Muestro el resultado de la división 
    printf("Resultado: %.2f\n", resultado);
    
    return 0;
}
