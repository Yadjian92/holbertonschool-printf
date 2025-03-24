#include <stdio.h>
#include <stdarg.h>
#include <main.h>

/**
 * print_char - Prints a char
 * @arg: A va_list containing the char to print
 */
	void print_char(va_list arg)
	{
		printf("%c", va_arg(arg, int));
	}


/**
 * print_string - Prints a string
 * @arg: A va_list containing the string to print
 */
	void print_string(va_list arg)
	{
		char *str = va_arg(arg, char *);

		printf("%s", str);
	}


/**
 * print_pourcent - Prints a percent sign
 * @arg: A va_list (unused in this function)
 */
	void print_pourcent(va_list arg)
	{
		(void)arg;
		printf("%%", va_arg(arg, int));
	}
