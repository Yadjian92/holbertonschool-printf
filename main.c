#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len1;
	int len2;

	/* Test normal strings */
	len1 = _printf("I'm printf!\n");
	len2 = printf("I'm printf!\n");
	printf("Length _printf: %d, Length printf: %d\n", len1, len2);

	/* Test for %c */
	len1 = _printf("Character: %c\n", 'A');
	len2 = printf("Character: %c\n", 'A');
	printf("Length _printf: %d, Length printf: %d\n", len1, len2);

	/* Test for %s */
	len1 = _printf("String: %s\n", "I'm a string!");
	len2 = printf("String: %s\n", "I'm a string!");
	printf("Length _printf: %d, Length printf: %d\n", len1, len2);

	/* Test for NULL string */
	len1 = _printf("NULL string: %s\n", NULL);
	len2 = printf("NULL string: %s\n", NULL);
	printf("Length _printf: %d, Length printf: %d\n", len1, len2);

	/* Test for %% */
	len1 = _printf("Percent sign: %%\n");
	len2 = printf("Percent sign: %%\n");
	printf("Length _printf: %d, Length printf: %d\n", len1, len2);

	return (0);
}
