#include <stdio.h>

// Defino una union llamada "id" que puede almacenar un carácter para el color y un entero para la talla
union id {
    char color;  // Para almacenar el color de la camisa
    int size;    // Para almacenar la talla de la camisa
};

int main(void) {
    // Declaro una variable de tipo "id" llamada "camisa"
    union id camisa;

    // Imprimo el tamaño de la union "camisa"
    printf("El tamaño de la union 'camisa' es: %zu bytes\n", sizeof(camisa));

    // Almaceno un valor de tipo carácter en el miembro "color" de la union
    camisa.color = 'R';  // 'R' representa el color rojo
    printf("Después de asignar color:\n");
    printf("Color: %c, Talla: %d\n", camisa.color, camisa.size);

    // Almaceno un valor entero en el miembro "size" de la union
    camisa.size = 42;  // Talla de la camisa
    printf("Después de asignar talla:\n");
    printf("Color: %c, Talla: %d\n", camisa.color, camisa.size);

    return 0;
}
