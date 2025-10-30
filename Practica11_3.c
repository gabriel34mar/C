 #include <stdio.h>

//Declaracion de la estructura
struct book
{
    char title[99];
    char author[99];
    int year;
};
void printBook(struct book);

int main (void)
{
//declaramos book1
struct book book1;
//Valores a book1 
printf("Ingrese el titulo: ");
scanf("%98s", book1.title);
printf("\nIngrese el autor: ");
scanf("%98s", book1.author);
printf("\nIngrese el year: ");
scanf("%d",&book1.year);
   
printBook(book1);

    return 0;
}

void printBook(struct book book1)
{

//Impresion de valores
printf("Titulo: %s\n",book1.title);
printf("Autor: %s\n",book1.author);
printf("Year: %i\n",book1.year);
}
