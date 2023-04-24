#include "main.h"

/**
 * print_char - print character to stdout
 * @ap: va_list parameter
 * @count: word count
 *
 * Return: count
 */

int print_char(va_list ap, int count)
{
	int c;

	c = va_arg(ap, int);
	count += _putchar(c);

	return (count);
}
