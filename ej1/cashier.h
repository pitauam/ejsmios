#ifndef CASHIER_H
#define CASHIER_H

#include "types.h"

/* Declaración incompleta: ocultamos los datos [cite: 62, 1030] */
typedef struct _Cashier Cashier;

/* --- Primitivas del TAD --- */

/* Reserva memoria para un nuevo cajero con un saldo inicial [cite: 419] */
Cashier* cashier_create(double initial_balance);

/* Libera la memoria reservada para el cajero [cite: 420] */
void cashier_free(Cashier *c);

/* Añade una cantidad al saldo actual [cite: 421] */
Status cashier_deposit(Cashier *c, double amount);

/* Retira una cantidad si hay saldo suficiente [cite: 422] */
Status cashier_withdraw(Cashier *c, double amount);

/* Consulta el saldo disponible sin modificarlo [cite: 423] */
double cashier_get_balance(const Cashier *c);

#endif