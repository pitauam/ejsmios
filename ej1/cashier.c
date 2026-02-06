#include <stdlib.h>
#include <stdio.h>
#include "cashier.h"

/* Definimos la estructura real: solo visible en este fichero [cite: 835, 1037] */
struct _Cashier {
    double balance;
};

Cashier* cashier_create(double initial_balance) {
    Cashier *c = NULL;
    
    /* 1. Reservamos memoria dinámica [cite: 843] */
    c = (Cashier *) malloc(sizeof(Cashier));
    
    /* 2. Control de error: ¿ha fallado malloc? [cite: 841, 857] */
    if (c == NULL) return NULL;
    
    /* 3. Inicializamos los datos */
    c->balance = initial_balance;
    
    /* 4. Devolvemos el puntero al objeto creado */
    return c;
}

void cashier_free(Cashier *c) {
    /* Siempre comprobamos que el puntero no sea NULL antes de liberar [cite: 854] */
    if (c != NULL) {
        free(c);
    }
}

Status cashier_deposit(Cashier *c, double amount) {
    /* Verificamos que el cajero exista y la cantidad sea positiva */
    if (c == NULL || amount < 0) return ERROR;
    
    c->balance += amount;
    return OK;
}

Status cashier_withdraw(Cashier *c, double amount) {
    /* Verificamos: existencia, cantidad positiva y si hay fondos suficientes */
    if (c == NULL || amount < 0 || c->balance < amount) {
        return ERROR;
    }
    
    c->balance -= amount;
    return OK;
}

double cashier_get_balance(const Cashier *c) {
    /* Si el cajero no existe, devolvemos un valor de error (ej. -1) */
    if (c == NULL) return -1.0;
    
    return c->balance;
}