#include <stdarg.h>
#include "main.h"

/**
 * _printf - Custom implementation of printf function
 * @format: The format string containing the characters and format specifiers
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0, i = 0;
	print_t p[] = {
		{'c', print_char}, {'%', print_percent}, {'i', print_int},
		{'s', print_string}, {'d', print_integer}, {'\0', NULL}
	};
	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (format[i])
	{
		if (format[i] != '%')
		{
			count += _putchar(format[i]);
		}
		else
		{
			i++;
			if (format[i] == '\0')
				return (-1);
			count += choose_specifier(format[i], args, p);
		}
		i++;
	}
	va_end(args);
	return (count);
}
