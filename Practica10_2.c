#include <stdio.h>

void invertirArray(int *array, int size);

int main(void)
{
int num[]={1,2,3,4,5,6,7,8};//minimo 8 enteros
int tam = sizeof(num)/sizeof(num[0]);//Tamaño del array 

printf("Primer array: \n");
for (int i= 0 ; i < tam ; i++ )
{
    printf("%d \n",num[i]);
}

invertirArray(num, tam);//Llamamos la funcion para invertir el arreglo

printf("Array invertido:\n ");
for (int i = 0; i < tam; i++)
{
    printf("%d \n",num[i]);
}

    return 0;
}

void invertirArray(int *array,int size)
{
int *inicio=array ;//Puntero de inicio del array
int *fin =array+size -1; //Puntero del final del array 

while (inicio<fin)
{
//Intercambio de elementos 
int temp= *inicio;
*inicio=*fin;
*fin=temp;
inicio++;
fin--;
}

}

