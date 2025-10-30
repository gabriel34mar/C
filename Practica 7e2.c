#include <stdio.h>

int main(void)
{
    int a;
    float h,b,area,perimetro;
    printf("Que opcion quiere?\n Opcion 1: calcular area \n Opcion 2: calcular perimetro \n Opcion 3 : salir\n");
    scanf("%d",&a);

    switch (a)
    {
    case 1:
        printf("Escribe la altura :");
        scanf("%f",&h);
        
        printf("Escribe la base:");
        scanf("%f",&b);
        area=b*h;
        printf("El area es = %f", area);
        break;
    case 2:
        printf("Escribe la altura :");
        scanf("%f",&h);
        
        printf("Escribe la base:");
        scanf("%f",&b);
        perimetro=(2*b)+(2*h);
        printf("El perimetro es = %f", perimetro);
        break;
        case 3:
        printf("salir");
        break;

    default:
    printf("Por favor ingrese una opcion valida");
        break;
    }
}