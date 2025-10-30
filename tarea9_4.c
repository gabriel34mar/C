#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(char *str, int start, int end) {
    // Caso base: si los índices se cruzan o son iguales, es un palíndromo
    if (start >= end) {
        return true;
    }
    // Si los caracteres en los extremos no coinciden, no es un palíndromo
    if (str[start] != str[end]) {
        return false;
    }
    // Llamada recursiva para los siguientes caracteres
    return isPalindrome(str, start + 1, end - 1);
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

    // Llamo a la función para determinar si la cadena es un palíndromo
    if (isPalindrome(input, 0, length - 1)) {
        printf("La cadena es un palíndromo.\n");
    } else {
        printf("La cadena no es un palíndromo.\n");
    }

    return 0;
}
