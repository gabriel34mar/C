#include <stdio.h>

// Declaracion de la estructura Book
struct Book {
    char title[99];
    char author[99];
    int year;
};

// Declaracion de la funcion printLibrary
void printLibrary(struct Book library[], int numBooks);

int main(void) {
    // Declaramos un array de estructuras Book
    struct Book library[] = {
        {"The Great Gatsby", "F. Scott Fitzgerald", 1925},
        {"1984", "George Orwell", 1949},
        {"To Kill a Mockingbird", "Harper Lee", 1960}
    };
    
    // Obtenemos la cantidad de libros en el array
    int numBooks = sizeof(library) / sizeof(library[0]);

    // Llamada a la funcion printLibrary
    printLibrary(library, numBooks);

    return 0;
}

// Funcion que imprime los detalles de todos los libros en el array
void printLibrary(struct Book library[], int numBooks) {
    for (int i = 0; i < numBooks; i++) {
        printf("Libro %d:\n", i + 1);
        printf("Titulo: %s\n", library[i].title);
        printf("Autor: %s\n", library[i].author);
        printf("Year: %d\n\n", library[i].year);
    }
}
