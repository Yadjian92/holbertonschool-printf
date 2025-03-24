#include <stdio.h>
#include <stdarg.h>
#include <main.h>

int _printf(const char *format, ...)
{
    va_list args;
    int count = 0;  /* Compteur de caractères imprimés */
    int i = 0;
    
    print_t handlers[] = {
        {'c', print_char},
        {'s', print_string},
        {'d', print_int},
        {'i', print_int},
        /* Ajouter d'autres formats selon tes besoins */
        {0, NULL}
    };

    va_start(args, format);
    
    while (format && format[i])
    {
        if (format[i] == '%' && format[i + 1])
        {
            /* Recherche du bon gestionnaire pour le format */
            i++;  /* Passer au caractère après % */
            
            /* Code pour appeler la bonne fonction selon format[i] */
            /* Incrémenter count par le nombre de caractères imprimés */
            
        }
        else
        {
            /* Imprimer un caractère normal */
            write(1, &format[i], 1);  /* Ou putchar(format[i]) */
            count++;
        }
        i++;
    }
    
    va_end(args);
    return count;
}

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
