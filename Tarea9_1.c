#include <stdio.h>

void reverseString(char *str, int start, int end) {
    if (start >= end) {
        return; // Caso base: los índices se cruzan
    }
    // Intercambio de caracteres
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    // Llamada recursiva con el siguiente par de caracteres
    reverseString(str, start + 1, end - 1);
}

int stringLength(char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++; // Cuento la longitud manualmente
    }
    return length;
}

int main(void) {
    char input[100];

    // Solicito al usuario ingresar una cadena
    printf("Ingrese una cadena: ");
    fgets(input, sizeof(input), stdin);

    // Elimino el salto de línea manualmente
    int length = stringLength(input);
    if (input[length - 1] == '\n') {
        input[length - 1] = '\0';
        length--; // Actualizo la longitud
    }

    // Llamo a la función para invertir la cadena
    reverseString(input, 0, length - 1);

    // Muestro la cadena invertida
    printf("Cadena invertida: %s\n", input);

    return 0;
}
