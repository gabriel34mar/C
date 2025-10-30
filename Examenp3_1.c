#include <stdio.h>
#include <string.h>

//declaramos las funciones que vamos a usar 
int romanCharValue(char c);
int convertRoman(const char *roman);

int main(void) 
{
    int decimalValue;
    char roman[20];
    //Solicitamos al usuario que ingrese el numero a convertir 
    printf("Ingresa un numero romano (hasta 1000) en mayusculas : ");
    scanf("%s", roman);
    //Damos un valor decimal a partir de la funcion de cambio romana
    decimalValue = convertRoman(roman);
    //imprimimos el resultado de numeros romanos a decimales 
    printf("El equivalente decimal de %s es %d\n", roman, decimalValue);

    return 0;
}


int romanCharValue(char c) 
{
    //Definimos los numeros romanos posibles
    switch(c) 
    {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}


int convertRoman(const char *roman) 
{
    //inicializamos las variables en 0
    int total = 0;
    int prevValue = 0;

    for (int i = 0; i < strlen(roman); i++) 
    {
        int currentValue = romanCharValue(roman[i]);

        if (currentValue > prevValue) 
        {
            /* Si el actual es mayor que el anterior, resta el doble del valor anterior
             porque lo sumamos antes cuando debería haberse restado.*/
            total += currentValue - 2 * prevValue;
        } 
        else 
        {
            total += currentValue;
        }

        prevValue = currentValue;
    }

    return total;
}