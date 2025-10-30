#include <stdio.h>

int main(void)
{
    // Declaramos los arreglos de caracteres 
    char nom[10] = "Mario";
    char ape[10] = "Romero";
    char eda[10] = "34";
    char sal[15] = "25,000";
    char tem[10] = "36.5";
    char gen[2] = "M";  

    // Imprimimos los datos en la pantalla 
    printf("Nombre: %s %s\n", nom, ape);
    printf("Edad: %s\n", eda);
    printf("Salario: %s\n", sal);
    printf("Temperatura: %s\n", tem);
    printf("Genero: %s\n", gen);

    return 0;
}
