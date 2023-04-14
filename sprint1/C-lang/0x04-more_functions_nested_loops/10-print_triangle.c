#include <stdio.h>
#include "main.h"

/**
 * print_triangle - function that prints a triangle
 * @size: size of triangle to be printed
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');
	
	for (i = size; i > 0; i--)
	{
		for (j = (i - 1); j > 0; j--)
			_putchar(' ');
		for (k = 0; k <= (size - i); k++)
			_putchar('#');
		_putchar('\n');
	}
}
