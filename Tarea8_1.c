#include <stdio.h>

// Definición de la unión "id"
union id {
    char color;  // Para almacenar el color
    int size;    // Para almacenar la talla
};

int main(void) {
    // Declaración de una variable de tipo "id" llamada "camisa"
    union id camisa;
    
    // Mostrar el tamaño de la unión
    printf("El tamaño de la unión 'camisa' es: %zu bytes\n", sizeof(camisa));

    // Almacenar un valor de tipo carácter en la unión
    camisa.color = 'R';  // 'R' puede representar el color rojo
    printf("Color: %c, Talla: %d\n", camisa.color, camisa.size);

    // Almacenar un valor entero en la unión
    camisa.size = 42;  // Talla de la camisa
    printf("Color: %c, Talla: %d\n", camisa.color, camisa.size);

    return 0;
}
