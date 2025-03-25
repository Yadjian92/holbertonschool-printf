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

	/* Test for %d */
	len1 = _printf("Integer: %d\n");
	len2 = printf("Integer: %d\n");
	printf("Length _printf: %d, Length printf: %d\n", len1, len2);

	/*Test for i% */
	len1 = _printf("Long: %i\n");
	len2 = printf("Long: %i\n");
	printf("Length _printf: %d, Length printf: %d\n", len1, len2);

	/* Test avec INT_MIN et INT_MAX */
	len1 = _printf("Min: %d, Max: %d\n", INT_MIN, INT_MAX);
	len2 = printf("Min: %d, Max: %d\n", INT_MIN, INT_MAX);
	printf("Length _printf: %d, Length printf: %d\n", len1, len2);

	/* Test avec des nombres à plusieurs chiffres */
	len1 = _printf("Multi-digit: %d %i\n", 12345, -67890);
	len2 = printf("Multi-digit: %d %i\n", 12345, -67890);
	printf("Length _printf: %d, Length printf: %d\n", len1, len2);

	/* Test avec un argument manquant */
	len1 = _printf("Missing arg: %d\n");
	len2 = printf("Missing arg: %d\n");
	printf("Length _printf: %d, Length printf: %d\n", len1, len2);

	return (0);
}
