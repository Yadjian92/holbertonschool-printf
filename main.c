#include "main.h"
# include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	int len1, len2;

	/* Test character */
	len1 = _printf("Character: %c\n", 'H');
	len2 = printf("Character: %c\n", 'H');
	printf("Length _printf: %d, Length printf: %d\n", len1, len2);

	/* Test string */
	len1 = _printf("String: %s\n", "I'm printf");
	len2 = printf("String: %s\n", "I'm printf");
	printf("Length _printf: %d, Length printf: %d\n", len1, len2);

	/* Test percent */
	len1 = _printf("Percent: %%\n");
	len2 = printf("Percent: %%\n");
	printf("Length _printf: %d, Length printf: %d\n", len1, len2);

	return (0);
}
