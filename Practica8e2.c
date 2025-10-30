#include <stdio.h>
#include <math.h>

int main(void)
{
   //lo corri con float porque con double no quiso
    float fa,num;
    int cont;

    fa=1;
    cont=1;
    printf("teclea el numero");
    scanf(" %f",&num);
    while(cont<=num)
    {
        fa=fa*cont;
        cont=cont+1;
    }
    printf("el factorial de %f es %f",num,fa);
    return 0;
}