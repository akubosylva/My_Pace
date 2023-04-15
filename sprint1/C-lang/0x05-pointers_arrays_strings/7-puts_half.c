#include <stdio.h>
#include "main.h"

/**
 * puts_half - a function that prints half of a string,
 * followed by a new line
 * @str: string parameter
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i, n, len = 0;

	for (i = 0; *(str + i) != '\0'; i++)
		len++;

	if (len % 2 == 0)
		n = (len / 2);
	else
		n = (len + 1) / 2;

	for (i = n; *(str + i) != '\0'; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
