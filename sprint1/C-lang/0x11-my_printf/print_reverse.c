#include "main.h"

/**
 * print_reverse - print strings to stdout in reverse
 * @ap: va_list parameter
 * @count: count
 *
 * Return: count
 */

int print_reverse(va_list ap, int count)
{
	char *s;
	int i, j, len = 0;

	s = va_arg(ap, char *);
	if (s == NULL)
		s = ")llun(";
	for (j = 0; *(s + j) != '\0'; j++)
		len++;
	for (i = (len - 1); i >= 0; i--)
		count += _putchar(*(s + i));
	return (count);
}
