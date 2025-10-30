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
    // Declaramos dos variables uint8_t con valores 0xFF y 0xA0
    uint8_t num1 = 0xFF;
    uint8_t num2 = 0xA0;
    int bit_pos = 4; // Posición del bit a modificar

    // Consultar (test) el bit en la posición 4 de num1
    int bit_test = (num1 >> bit_pos) & 1;
    printf("Valor inicial de num1: %d (%s)\n", num1, uint8_to_binary(num1));
    printf("Bit en posición %d de num1: %d\n", bit_pos, bit_test);

    // Cambiar (toggle) el bit en la posición 4
    num1 ^= (1 << bit_pos);
    //  el resultado del cambio
    bit_test = (num1 >> bit_pos) & 1;
    printf("Valor después de cambiar el bit 4 de num1: %d (%s)\n", num1, uint8_to_binary(num1));
    printf("Nuevo valor del bit en posición %d de num1: %d\n", bit_pos, bit_test);

    // Establecer (set) el bit en la posición 4
    num1 |= (1 << bit_pos);
    //el resultado de establecer el bit
    bit_test = (num1 >> bit_pos) & 1;
    printf("Valor después de establecer el bit 4 de num1: %d (%s)\n", num1, uint8_to_binary(num1));
    printf("Nuevo valor del bit en posición %d de num1: %d\n", bit_pos, bit_test);

    // Borrar (clear) el bit en la posición 4
    num1 &= ~(1 << bit_pos);
    //  el resultado de borrar el bit
    bit_test = (num1 >> bit_pos) & 1;
    printf("Valor después de borrar el bit 4 de num1: %d (%s)\n", num1, uint8_to_binary(num1));
    printf("Nuevo valor del bit en posición %d de num1: %d\n", bit_pos, bit_test);

    return 0;
}
