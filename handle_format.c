#include "main.h"

/**
 * handle_format - Handles format specifiers
 * @format: Current format character
 * @args: Variable arguments list
 * @p: Array of format handlers
 *
 * Return: Number of characters printed
 */
int handle_format(char format, va_list args, print_t p[])
{
	int j = 0;
	int count = 0;

	while (p[j].specifier != '0')
	{
		if (format == p[j].specifier)
		{
			count += p[j].f(args);
			return (count);
		}
		j++;
	}

	/* Format specifier not found, print % and the character */
	_putchar('%');
	_putchar(format);
	return (2);
}
