#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "book.h"

struct _Book {
    char title[129];  /* 128 + \0 [cite: 524] */
    char author[65];  /* 64 + \0 [cite: 524] */
    char isbn[33];    /* 32 + \0 [cite: 524] */
    int copies;
};

Book* book_create_from_description(const char* desc) {
    Book *b = (Book*) malloc(sizeof(Book));
    if (!b || !desc) return NULL;

    /* sscanf es perfecto para este formato [cite: 535] */
    if (sscanf(desc, "%s %s %s %d", b->author, b->title, b->isbn, &b->copies) != 4) {
        free(b);
        return NULL;
    }
    return b;
}

/* TU TURNO: Implementa book_are_equal [cite: 537] */
/* Pista: Usa strcmp con el ISBN. Devuelve TRUE si son iguales [cite: 538] */

/* TU TURNO: Implementa los getters que faltan [cite: 536] */