/*Sumas de arreglos */
#include <stdio.h>
#include <stdlib.h>

int arrA[10],arrB[10], arrC[10];
int i, suma;

int main()
{
    printf("\nTeclea valores de A");
    for ( i = 0; i < 10; i++)
    {
        printf("A[%d]", i);
        scanf("%d", &arrA[i]);
    }

    printf("\nTeclea valores de B");
    for ( i = 0; i < 10; i++)
    {
        printf("B[%d]\n", i);
        scanf("%d", &arrB[i]);
    }
    for ( i = 0; i < 10; i++)
    {
     arrC[i]=arrA[i]+arrB[i];
     printf("%d\n",arrC[i]);
    }

    printf("Regresiva\n");

    for ( i = 9; i >= 0; i--)
    {
        printf("A[%d]\n", i);
        scanf("%d", &arrA[i]);
    }
        for ( i = 9; i >= 0; i--)
    {
        printf("\nB[%d]\n", i);
        scanf("%d", &arrB[i]);
    }
        for ( i = 9; i >= 0; i--)
    {
     arrC[i]=arrA[i]+arrB[i];
     printf("\n%d",arrC[i]);
    }
    
}