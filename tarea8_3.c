#include <stdio.h>
#include <stdint.h>

// Función para convertir uint8_t a cadena binaria
const char *uint8_to_binary(uint8_t x) {
    static char b[9];
    b[0] = '\0';

    for (int i = 7; i >= 0; i--) {
        b[7-i] = (x & (1 << i)) ? '1' : '0';
    }
    b[8] = '\0';

    return b;
}

int main(void) {
    uint8_t num;

    // Solicitar al usuario un número uint8_t
    printf("Ingrese un número (0-255): ");
    scanf("%hhu", &num);

    // Mostrar el valor original en binario
    printf("Valor original: %d (%s)\n", num, uint8_to_binary(num));

    // Invertir los bits
    uint8_t inverted_num = ~num;

    // Mostrar el valor invertido en binario
    printf("Valor invertido: %d (%s)\n", inverted_num, uint8_to_binary(inverted_num));

    return 0;
}
