/*Proyecto 3er parcial*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <windows.h>

#define FILAS 10
#define COLUMNAS 10
#define PARED "/"
#define CAMINO " "
#define INICIO "[]"
#define FIN "[]"
#define JUGADOR "0"

char laberinto [FILAS][COLUMNAS],movimiento;
int i,j,k,posX,posY;

// Imprimir labeirnto laberitno
void printlab (char laberinto[FILAS][COLUMNAS] )
{
    for ( i = 0; i < FILAS; i++)
    {
    for (int j = 0; j < COLUMNAS; j++) {
            printf("%c ", laberinto[i][j]);
        }
        printf("\n");
    }
}
// Genera laberinto

void generarlab (char laberinto [FILAS][COLUMNAS])
{
    srand(time(NULL));
    for (int i = 0; i < FILAS; i++)
    {
    for (int j = 0; j < COLUMNAS; j++)
    {
    laberinto[i][j] = PARED;
    }
    }
    laberinto[0][0] = INICIO;
    laberinto[FILAS - 1][COLUMNAS - 1] = FIN;
    for (int i = 1; i < FILAS - 1; i++) 
    {
        for (int j = 1; j < COLUMNAS - 1; j++) 
        {
            if (rand() % 2 == 0) 
            {
                laberinto[i][j] = CAMINO;
            }
        }
    }
}

int main ()
{
generarlab(laberinto);

// inicializar poscicion del jugador 
posX= 0;
posY= 0;
laberinto[posX][posY] = JUGADOR ;
while (1)
{
system("clear"); // limpiar pantalla?
printlab(laberinto);//imprimir laberinto
printf("Utilizar a/w/s/d para mover al jugador");
scanf("%c", &movimiento);//moviento del usuario

laberinto[posX][posY]= CAMINO ;// Borrar la poscicion anterior del usuario

switch (movimiento) 
    {
        case 'w':
            if (posX > 0) posX--;
                break;
        case 'a':
            if (posY > 0) posY--;
                break;
        case 's':
            if (posX < FILAS - 1) posX++;
                break;
        case 'd':
             if (posY < COLUMNAS - 1) posY++;
                break;
        case 'q':
            printf("¡Hasta luego!\n");
                exit(0);
            default:
                break;
     }
     laberinto[posX][posY] = JUGADOR; // Colocar al jugador en la nueva posición
}
return 0;
}