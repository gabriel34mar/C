#include <stdio.h>

int main(void) 
{
    int i;

    // Utilice un bucle for para imprimir los números pares del 1 al 50
    for (i = 2; i <= 50; i += 2) {
        printf("%d\n", i);  // Aquí imprimo el número par actual
    }

    return 0;
}
