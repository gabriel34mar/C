//Libreria de printf y scanf 
#include <stdio.h>
//declaracion global de las variables 
int num;
float num1;
char letra;
//inicio del la funcion del programa
int main (void)
{
    //valor estatico de cada variable 
    num=25;
    num1=3.14;
    letra='A';
    // imprimir las variables 
printf("valor del entero %d, valor decimal %f, y caracter %c",num ,num1,letra);
}