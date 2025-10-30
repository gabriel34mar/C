#include <stdio.h>

int main(void)
{
    int num,sum;
    printf("Ingrese el numero al que desea llegar: ");
    scanf(" %d",&num);
    if(num<0)
    {
        printf("Por favor ingrese un numero positivo");
    return 1;
    }
    
    for (int i = 1; i <= num; i++)
    {
        sum +=1;

    }
    printf("La suma de todos los numeros desde 1 hasta %d es: %d\n", num, sum);
   //reinicio del programa
    sum = 0;
    int i = 1;
     while (i <= num) 
    {
        sum += i;
        i++;
    }
    printf("\nLa suma calculada es : %d",sum);

    
    return 0;
}