#include <stdio.h>

int main(void)
{
    int a=10;
    float b=a/20;
    printf("Div: %f\n", b);
    //implicito    
    b=a/20.0;
    printf("Div:%f\n", b);
    //explicito
    b=(float)a/20;
    printf("Div: %f\n",b);
    //implicito a int
    b= .99;
    a= b;
    printf("a: %d\n", a);
    //explicito
    b=1.2;
    a=b;
    printf("a: %d\n",a);
    return 0;
    
}