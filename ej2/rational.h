#ifndef RATIONAL_H
#define RATIONAL_H

#include "types.h"

typedef struct _Rational Rational;

Rational* rational_create(int n, int d);
void rational_free(Rational *r);

/* Operaciones */
Rational* rational_sum(const Rational *r1, const Rational *r2);
/* TODO: Añade aquí el prototipo de rational_prod (multiplicación) */
Rational* rational_div(const Rational *r1, const Rational *r2);

/* Salida */
Status rational_print(const Rational *r);

#endif