#include <stdio.h>
#include "main.h"

/**
 * check - a function that checks if a number is prime
 * @n: number
 * @p: divisor
 *
 * Return: 1 if not a prime number and 0 otherwise
 */

int check(int n, int p)
{
	if (p >= n)
		return (1);
	if (n % p == 0)
		return (0);
	return (check(n, (p + 1)));
}

/**
 * is_prime_number - a function that returns 1 if
 * the input integer is a prime number, otherwise return 0
 * @n: integer parameter
 *
 * Return: 1 if prime and 0 otherwise
 */

int is_prime_number(int n)
{
	int div = 3;

	if (n <= 1)
		return (0);
	if (n == 2 || n == 3)
		return (1);

	return (check(n, div));
}
