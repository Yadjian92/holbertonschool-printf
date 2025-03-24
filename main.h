#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list arg);
int print_string(va_list arg);
int print_percent(va_list arg);


/**
 * struct print_s - Struct for mapping specifiers to functions
 * @specifier: The format specifier
 * @f: The function pointer to handle the specifier
 */
typedef struct print_s
{
	char *specifier;  /* Could be just a char for printf */
	int (*f)(va_list);
} print_t;

#endif
