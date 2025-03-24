#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - Custom implementation of printf function
 * @format: The format string containing the characters and format specifiers
 *
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;  /* Compteur de caractères imprimés */
	int i = 0, j;
	

	print_t p[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{NULL, NULL}
	};

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
		}

		else
		{
		i++;  /* Passer au caractère après % */
            
		if (format[i] == '\0')
			return (-1);

		j = 0;
		while (p[j].specifier != NULL)
		{
			if (format[i] == p[j].specifier)
			{
				count += p[j].f(args);
				break;
			}
			j++;
		}

		/* Si spécificateur non reconnu */
		if (p[j].specifier == '\0')
		{
			_putchar('%');
			_putchar(format[i]);
			count += 2;
		}
	}

	}
	va_end(args);
	return (count);
}
