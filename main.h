#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

/**
 * struct print_s - Struct for mapping specifiers to functions
 * @specifier: The format specifier
 * @f: The function pointer to handle the specifier
 */
typedef struct print_s
{
	char specifier;
	int (*f)(va_list);
} print_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list arg);
int print_string(va_list arg);
int print_percent(va_list arg);
int print_integer(va_list arg);
int print_digits(unsigned int n);
int print_int(va_list arg);
int choose_specifier(char format, va_list args, struct print_s p[]);

#endif
