#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: integer parameter
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int last = 0;

	if (n < 0)
		n = (-1 * n);
	else
		n = n;

	last = n % 10;
	_putchar(last + '0');
	return (last);
}
