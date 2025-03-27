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
    len2 = printf("NULL string: %s\n", "(null)");
    printf("Length _printf: %d, Length printf: %d\n", len1, len2);

    /* Test for %% */
    len1 = _printf("Percent sign: %%\n");
    len2 = printf("Percent sign: %%\n");
    printf("Length _printf: %d, Length printf: %d\n", len1, len2);

    /* Test for %d (with argument) */
    len1 = _printf("Integer: %d\n", 42);
    len2 = printf("Integer: %d\n", 42);
    printf("Length _printf: %d, Length printf: %d\n", len1, len2);

    /* Test for %i (with argument) */
    len1 = _printf("Int: %i\n", 42);
    len2 = printf("Int: %i\n", 42);
    printf("Length _printf: %d, Length printf: %d\n", len1, len2);

    /* Test for INT_MIN */
    len1 = _printf("INT_MIN: %d\n", INT_MIN);
    len2 = printf("INT_MIN: %d\n", INT_MIN);
    printf("Length _printf: %d, Length printf: %d\n", len1, len2);

    /* Test for INT_MAX */
    len1 = _printf("INT_MAX: %d\n", INT_MAX);
    len2 = printf("INT_MAX: %d\n", INT_MAX);
    printf("Length _printf: %d, Length printf: %d\n", len1, len2);

    /* Test for INT_MIN with %i */
    len1 = _printf("INT_MIN with %%i: %i\n", INT_MIN);
    len2 = printf("INT_MIN with %%i: %i\n", INT_MIN);
    printf("Length _printf: %d, Length printf: %d\n", len1, len2);

    /* Test for INT_MAX with %i */
    len1 = _printf("INT_MAX with %%i: %i\n", INT_MAX);
    len2 = printf("INT_MAX with %%i: %i\n", INT_MAX);
    printf("Length _printf: %d, Length printf: %d\n", len1, len2);

    /* Test with zero */
    len1 = _printf("Zero: %d\n", 0);
    len2 = printf("Zero: %d\n", 0);
    printf("Length _printf: %d, Length printf: %d\n", len1, len2);

    /* Test with negative number */
    len1 = _printf("Negative: %d\n", -12345);
    len2 = printf("Negative: %d\n", -12345);
    printf("Length _printf: %d, Length printf: %d\n", len1, len2);

    return (0);
}
