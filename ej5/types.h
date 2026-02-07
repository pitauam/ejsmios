#ifndef TYPES_H
#define TYPES_H

/**
 * @brief Tipo Status para el control de errores en las funciones.
 * Los valores posibles son ERROR (0) u OK (1)[cite: 214, 531].
 */
typedef enum {
    ERROR = 0,
    OK = 1
} Status;

/**
 * @brief Tipo Bool para operaciones lógicas.
 * Se define como Boolean en algunos enunciados.
 */
typedef enum {
    FALSE = 0,
    TRUE = 1
} Bool;

/* Creamos un alias para que 'Boolean' también funcione  */
typedef Bool Boolean;

#endif