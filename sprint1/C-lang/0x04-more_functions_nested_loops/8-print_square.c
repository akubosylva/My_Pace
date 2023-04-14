#include <stdio.h>
#include "main.h"

/**
 * print_square - printd a square
 * @size: size of square to be printed
 *
 * Return: void
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = size; i > 0; i--)
		{
			for (j = size; j > 0; j--)
				_putchar('#');
			_putchar('\n');
		}
	}
}
