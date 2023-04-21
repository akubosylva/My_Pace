#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - a function that prints anything
 * @format: is a list of types of argument passed to the function
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i;
	char *s, *sep = "";
	va_list ap;

	va_start(ap, format);
	for (i = 0; *(format + i) && format; i++)
	{
		switch(*(format + i))
		{
			case 'c':
				printf("%s%c", sep, va_arg(ap, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(ap, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(ap, double));
				break;
			case 's':
				s = va_arg(ap, char *);
				if (s == NULL)
					printf("(nil)");
				printf("%s%s", sep, s);
				break;
			default:
				break;
		}
		sep = ", ";
	}
	printf("\n");
}
