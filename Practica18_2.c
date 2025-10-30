#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *str1, *str2, *concatStr;
    int len1, len2;

    // Solicito la primera cadena al usuario
    char buffer1[100], buffer2[100];
    printf("Introduce la primera cadena: ");
    scanf("%99s", buffer1);

    // Solicito la segunda cadena al usuario
    printf("Introduce la segunda cadena: ");
    scanf("%99s", buffer2);

    // Calculo la longitud de las dos cadenas
    len1 = strlen(buffer1);
    len2 = strlen(buffer2);

    // Reservo memoria dinamica para la concatenacion
    concatStr = (char *)malloc((len1 + len2 + 1) * sizeof(char));
    if (concatStr == NULL)
    {
        printf("Error al reservar memoria.\n");
        return 1;
    }

    // Concateno las cadenas
    strcpy(concatStr, buffer1);
    strcat(concatStr, buffer2);

    // Imprimo la cadena concatenada
    printf("La cadena concatenada es: %s\n", concatStr);

    // Libero la memoria asignada
    free(concatStr);

    return 0;
}

