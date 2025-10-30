//Factorial con for
#include <stdio.h>
#include <math.h>



int main(void)
{
    int fact, num,i;
    printf("Pedir numero");
    scanf("%d", &num);
     fact=1;
    for (i=1; i < num; i++)
    {
        fact=fact*i;
    }
    printf(" Factorial %d\n",fact);
    return 0;
}