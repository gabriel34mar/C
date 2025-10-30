#include <windows.h>

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
    // Mover el cursor a la posición (10, 5)
    gotoxy(15, 5);
    // Imprimir un mensaje en la nueva posicion
     printf("Hola, Windows!");

    return 0;
}
