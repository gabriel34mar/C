#include <stdio.h>

int main(void)
{
    //arreglo donde guardamos las temperaturas solicitadas al usuario
    float temp[100];
    //declaracion donde guardamos el promedio
    float prom;
    //solicitamos temperaturas
    printf("Ingrese la temperatura 1: ");
    scanf(" %f",&temp[0] );
    printf("\nIngrese la temperatura 2: ");
    scanf(" %f",&temp[1] );
    printf("\nIngrese la temperatura 3: ");
    scanf(" %f",&temp[2]);
    //como se saca el promedio
    prom=(temp[0]+temp[1]+temp[2])/3;
    //imprime el promedio
    printf( "temperatura promedio: %f ", prom);
    // se inicializa el ciclo para hacer la dsicriminacion de cual es mayor al promedio
for (int i = 0; i <= 3; i++)
{
    //Se define si la temperatura es mayor al promedio
    if (temp[i]>prom)
    {
        //si es mayor se imprime 
        printf("\n%f es mayor al promedio\n",temp[i]);
    }
    
}

return 0;    
}