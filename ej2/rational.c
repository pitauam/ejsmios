#include <stdio.h>
#include <stdlib.h>
#include "rational.h"

struct _Rational
{
    int n; /* Numerador */
    int d; /* Denominador */
};

/* Función auxiliar (privada): Máximo Común Divisor  */
int gcd(int m, int n)
{
    int r;
    while (n != 0)
    {
        r = m % n;
        m = n;
        n = r;
    }
    return m;
}

Rational *rational_create(int n, int d)
{
    Rational *r = NULL;
    int common;

    if (d == 0)
        return NULL; /* Un denominador no puede ser 0 */

    r = (Rational *)malloc(sizeof(Rational));
    if (r == NULL)
        return NULL;

    /* Simplificamos la fracción al crearla usando gcd [cite: 430] */
    common = gcd(n, d);
    r->n = n / common;
    r->d = d / common;

    return r;
}

void rational_free(Rational *r)
{
    if (r)
        free(r);
}

Rational *rational_sum(const Rational *r1, const Rational *r2)
{
    if (!r1 || !r2)
        return NULL;
    /* Suma: (a/b) + (c/d) = (a*d + c*b) / (b*d) */
    return rational_create(r1->n * r2->d + r2->n * r1->d, r1->d * r2->d);
}

/* --- TU TAREA 1: Implementa aquí rational_prod --- */
/* Pista: (a/b) * (c/d) = (a*c) / (b*d) */

Rational *rational_prod(const Rational *r1, const Rational *r2)
{
    if (!r1 || !r2)
    {
        return NULL; /*error*/
    }

    return rational_create((r1->n * r2->n), (r1->d * r2->d));
}

/* --- TU TAREA 2: Implementa aquí rational_div --- */
/* Pista: (a/b) / (c/d) = (a*d) / (b*c) */

Rational *rational_div(const Rational *r1, const Rational *r2)
{
    if (!r1 || !r2)
    {
        return NULL; /*error*/
    }

    return rational_create((r1->n * r2->d), (r1->d * r2->n));
}





Status rational_print(const Rational *r)
{
    if (!r)
        return ERROR;
    printf("%d/%d", r->n, r->d);
    return OK;
}