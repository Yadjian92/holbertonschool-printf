#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include "main.h"

/**
 * print_char - Prints a char
 * @arg: A va_list containing the char to print
 *
 * Return: The number of characters printed (always 1)
 */
int print_char(va_list arg)
{
	return (_putchar(va_arg(arg, int)));
}


/**
* print_string - Prints a string
* @arg: A va_list containing the string to print
*
* Return: The number of characters printed
*/
int print_string(va_list arg)
{
	char *str = va_arg(arg, char *);
	int len = 0;

	if (str == NULL)
		str = "(null)";

	while (str[len])
	{
		_putchar(str[len]);
		len++;
	}

	return (len);
}


/**
* print_percent - Prints a percent sign
* @arg: A va_list (unused in this function)
*
* Return: The number of characters printed (always 1)
*/
int print_percent(va_list arg)
{
	(void)arg;
	return (_putchar('%'));
}


/**
 * print_integer - Prints an integer
 * @arg: A va_list containing the integer to print
 *
 * Return: The number of characters printed
 */
int print_integer(va_list arg)
{
	int number = va_arg(arg, int);
	int count = 0;
	unsigned int digits;

	if (number == 0)
	{
		return (_putchar('0'));
	}
	else if (number == INT_MIN)
	{
		count += _putchar('-');
		count += _putchar('2');
		digits = 147483648; /* Remaining digits after handling '-2' */
	}
	else if (number < 0)
	{
		count += _putchar('-');
		digits = (unsigned int)(-number); /* Convert to positive using unsigned */
	}
	else
		digits = number;

	count += print_digits(digits);

	return (count);
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

		if (n / 10)
		{
			count += print_digits(n / 10);
		}
			count += _putchar((n % 10) + '0');

	return (count);
}
