#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints the n times table, starting from 0
 * @n: integer parameter
 *
 * Return: void
 */

void print_times_table(int n)
{
	int i, j, mul;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i <= n; i++)
	{
		_putchar('0');
		for (j = 1; j <= n; j++)
		{
			_putchar(',');
			_putchar(' ');
			mul = (i * j);
			if (mul < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar((mul % 10) + '0');
			}
			if (mul >= 10 && mul < 100)
			{
				_putchar(' ');
				_putchar((mul / 10) + '0');
				_putchar((mul % 10) + '0');
			}
			if (mul >= 100)
			{
				_putchar(((mul / 100) % 10)  + '0');
				_putchar(((mul / 10) % 10) + '0');
				_putchar((mul % 10) + '0');
			}

			if (j == n)
				_putchar('\n');
		}
	}
}
