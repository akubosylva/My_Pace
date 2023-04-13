#include <stdio.h>
#include "main.h"

/**
 * times_table - prints the 9 times table starting from 0
 * Return: void
 */

void times_table(void)
{
	int i, j, mul;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			mul = (i * j);
			if (mul < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((mul % 10) + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((mul / 10) + '0');
				_putchar((mul % 10) + '0');
			}
			
			if (j == 9)
				_putchar('\n');
		}
	}
}
