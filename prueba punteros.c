#include <stdio.h>

int main (void)
{
    int a=0;
    int *p=&a;

    printf("Valor de a %d\n", a);
    printf("Direccion de a = %x\n",&a);

    printf("Valor de p %x\n",p);
    printf("Valor de 'a' a traves de p= %d",*p);

}