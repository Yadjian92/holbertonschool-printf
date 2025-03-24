#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include "main.h"

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
