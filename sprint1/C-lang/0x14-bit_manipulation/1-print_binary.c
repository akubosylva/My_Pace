#include "main.h"

/**
 * print_binary - a function that prints the binary
 * representation of a number
 * @n: number to print binary form
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int c, result, count = 0;
	
	for (c = 31; c >= 0; c--)
	{
		result = n >> c;
		if (result & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
