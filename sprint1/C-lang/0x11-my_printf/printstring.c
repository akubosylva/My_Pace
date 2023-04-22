#include "main.h"

/**
 * print_string - a function that prints a string to stdout base
 * on the format specifier 's'
 * @ap: va_list parameter
 * @count: word count
 *
 * Return: count
 */

int print_string(va_list ap, int count)
{
	const char *s;
	int i;

	s = va_arg(ap, const char *);
	for (i = 0; *(s + i) != '\0'; i++)
		count += _putchar(*(s + i));
	return (count);
}
