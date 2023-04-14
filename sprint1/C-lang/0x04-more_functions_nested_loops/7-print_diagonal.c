#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times to print '\' character
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, k;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (k = n; k > 0; k--)
		{
			for (i = (n - k); i > 0; i--)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
