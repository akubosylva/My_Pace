#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - add tow integer
 * @a: first integer
 * @b: seconf integer
 *
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - find the difference between two numbers
 * @a: first integer
 * @b: second integer
 *
 * Return: difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - find the product of two integer
 * @a: first integer
 * @b: second integer
 *
 * Return: product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - find the result of division of two integer
 * @a: first integer
 * @b: second integer
 *
 * Return: divident
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division
 * @a: first integer
 * @b: second integer
 *
 * Return: remainder
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
