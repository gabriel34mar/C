#include <stdio.h>

int main (void)
{
    char let;
    printf("Ingresa char \n");
    scanf("%c", &let);
    //getchar();
    char strg[30];
    printf("Ingrese string \n");
    scanf("%[^\n]s", strg);
    //getchar();
    printf("Tu char= %c \n", let);
    printf("tu string= %s", strg);
    return 0;
}