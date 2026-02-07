#ifndef BOOK_H
#define BOOK_H
#include "types.h"

typedef struct _Book Book;

/* Crea un libro desde una cadena: "autor titulo isbn copias" [cite: 535] */
Book* book_create_from_description(const char* desc);
void book_destroy(Book *b);

/* Getters [cite: 536] */
const char* book_get_title(const Book *b);
const char* book_get_isbn(const Book *b);
int book_get_copies(const Book *b);

/* Comparación [cite: 537, 538] */
Bool book_are_equal(const Book *b1, const Book *b2);

#endif