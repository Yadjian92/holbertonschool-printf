#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
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
	int n = va_arg(arg, int);
    int count = 0;

	/* Gérer les cas spéciaux comme les nombres négatifs */

	/* Appeler une fonction auxiliaire pour imprimer les chiffres */

	return count;
}

/**
 * print_long - Prints a long integer
 * @arg: A va_list containing the long integer to print
 *
 * Return: The number of characters printed
 */
int print_long(va_list arg)
{
	return (_putchar(va_arg(arg, int)));
}
