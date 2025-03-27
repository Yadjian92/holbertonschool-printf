#include "main.h"

/**
 * choose_specifier - Handles format specifiers
 * @format: Current format character
 * @args: Variable arguments list
 * @p: Array of format handlers
 *
 * Return: Number of characters printed
 */
int choose_specifier(char format, va_list args, print_t p[])
{
	int j = 0;
	int count = 0;

	while (p[j].specifier != '\0')
	{
		/* If a matching specifier is found */
		if (format == p[j].specifier)
		{
			count += p[j].f(args);
			return (count);
		}
		j++;
	}
	/* If no matching specifier was found, print % and the character */
	_putchar('%');
	_putchar(format);
	return (2);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_digits - Prints the digits of an integer
 * @n: The integer to print
 *
 * Return: Number of characters printed
 */
int print_digits(unsigned int n)
{
	int count = 0;
		/* For multi-digit numbers, recursively print all but last digit */
		if (n / 10)
		{
			count += print_digits(n / 10);
		}
			/* Print current digit and update count */
			count += _putchar((n % 10) + '0');

	return (count);
}
