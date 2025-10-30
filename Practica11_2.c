#include <stdio.h>

//Declaracion de la estructura
struct book
{
    char title[99];
    char author[99];
    int year;
};
void print(struct book);

int main (void)
{
//Valores a book1 
struct book book1= {"Shaum's Outline of Programming with C","B.S. Gottfried",1996};
   
    print(book1);

    return 0;
}

void print(struct book book1)
{

//Impresion de valores
printf("Titulo: %s\n",book1.title);
printf("Autor: %s\n",book1.author);
printf("Year: %i\n",book1.year);
}