//librerias requeridas
#include <stdio.h>
#include <math.h>

//declaracion de variables
int a,b,suma ,resta , multiplicacion;
double division;
int main (void)
{
//valor de variables
a=15;
b=4;

//operaciones
suma=a+b;
resta=a-b;
multiplicacion=a*b;
//por alguna razon me da 3 en vez de 3.75 a pesar de usar la libreria de math.h
division=a/b;
//impresion de resultados
printf ("resultados : suma= %d, resta %d, multiplicaion %d, division %f",suma,resta,multiplicacion,division);
}