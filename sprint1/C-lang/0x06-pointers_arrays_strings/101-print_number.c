#include <stdio.h>
#include "main.h"

/**
 * print_number - a function that prints an integer
 * @n: integer parameter
 *
 * Return: void
 */

void print_number(int n)
{
	if (n < 0)
	{
		n = (-1 * n);
		_putchar('-');
	}

	if ((n / 10) > 0)
		print_number(n / 10);

	_putchar((n % 10) + '0');
}
