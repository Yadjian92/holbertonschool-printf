#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);

typedef struct print_s {
    char *specifier;  /* Pourrait être juste un char pour printf */
    void (*f)(va_list);
} print_t;

#endif