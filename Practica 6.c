#include <stdio.h>

int main (void)
{
    float x,z;
    x=5.0/2.0;
    z=5.0*2.0;
    printf("x= %f \n",x);
    printf("z= %f \n",z);
    getchar();

    printf("x= %f \n",++x);
    printf("z= %f \n",z++);

    getchar();
    getchar();

    x*=2;
    printf("x= %f \n",x);
    z+=5;
    printf("z= %f \n",z);

    getchar();
    getchar();

    printf("es x<z? \n r=%f\n",x<z);
    printf("Es x=z?\n r=%f",x==z);

    
}