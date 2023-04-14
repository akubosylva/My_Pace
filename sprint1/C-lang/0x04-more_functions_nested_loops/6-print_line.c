#include <stdio.h>
#include "main.h"

/**
 * print_line - draws straight line in the terminal
 * @n: number of times to print "_"
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = n; i > 0; i--)
		_putchar('_');
	_putchar('\n');
}
