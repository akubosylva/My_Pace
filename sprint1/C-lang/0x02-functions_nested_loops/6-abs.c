#include <stdio.h>
#include "main.h"

/**
 * _abs - computes absolute value of an integer
 * @n: integer parameter
 * Return: integer without the sign
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = (n * -1);
		return (n);
	}
	else
		return (n);
}
