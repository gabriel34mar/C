#include <stdio.h>

// Función recursiva para calcular el n-ésimo número de Fibonacci
int fibonacci(int n) {
    if (n == 0) { // Caso base
        return 0;
    } else if (n == 1) { // Caso base
        return 1;
    } else { // Caso recursivo
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main(void) {
    int termino;
    printf("Ingrese el termino de Fibonacci que desea calcular: ");
    scanf("%d", &termino);

    if (termino < 0) {
        printf("La sucesion de Fibonacci no está definida para números negativos.\n");
    } else {
        printf("Fibonacci(%d) = %d\n", termino, fibonacci(termino));
    }

    return 0;
}
