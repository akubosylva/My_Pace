#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - a function that returns the value of 'x'
 * raised to the power of 'y'
 * @x: base integer
 * @y: power integer
 *
 * Return: integer power
 */

int _pow_recursion(int x, int y)
{
	int power;
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	
	power = x * _pow_recursion(x, (y - 1));

	return (power);
}
