#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "library.h"

#define MAX_BOOKS 1024 

struct _Library {
    Book* books[MAX_BOOKS]; /* Array de punteros a Book [cite: 126, 144] */
    int n_books;
};

Library* library_create() {
    Library *l = (Library*) malloc(sizeof(Library));
    if (!l) return NULL;
    l->n_books = 0;
    return l;
}

/* TU TURNO: Implementa library_add_book [cite: 543] */
Status library_add_book(Library *l, const char *desc) {
    /* 1. Comprobar si hay hueco (n_books < MAX_BOOKS) [cite: 526] */
    /* 2. Crear el libro con book_create_from_description [cite: 535] */
    /* 3. Guardar el puntero en l->books[l->n_books] */
    /* 4. Incrementar n_books y devolver OK */
}

/* TU TURNO: Implementa library_destroy [cite: 539] */
void library_destroy(Library *l) {
    /* ¡OJO! Bucle para hacer book_destroy de cada libro antes de free(l) */
}