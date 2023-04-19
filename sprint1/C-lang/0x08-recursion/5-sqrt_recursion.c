#include <stdio.h>
#include "main.h"

/**
 * root - finds the natural root of a number
 * @n: number
 * @r: root integer
 *
 * Return: the root if found or -1
 */

int root(int n, int r)
{
	if (r * r > n)
		return (-1);
	if (r * r == n)
		return (r);

	return (root(n, (r + 1)));
}

/**
 * _sqrt_recursion - a function that returns the
 * natural square root of a number
 * @n: integer parameter
 *
 * Return: square root of number
 */

int _sqrt_recursion(int n)
{
	int rt;

	if (n < 1)
		return (-1);

	rt = root(n, 0);
	return (rt);
}
