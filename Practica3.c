#include <stdio.h>

int main (void)
{
    // inicializamos el arreglo y declaramos donde se guardara la suma 
    int num[5]={1,2,3,4,5};
    int sum;
    // Se hace la suma 
    sum=num[0]+num[1]+num[2]+num[3]+num[4];
    // imprimimos resultado
    printf("La suma del arreglo es: %i", sum );
    return 0;
    
}