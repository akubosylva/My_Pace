#include <stdio.h>
#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 * @s: string pointer
 *
 * Return: converted value or Zero(0) on error
 */

int _atoi(char *s)
{
	int i, num, sign = 0;
	int dash = 0;

	/* finding the sign before integer and checking for null value */
	for (i = 0; s[i] < '0' || s[i] > '9'; i++)
	{
		if (s[i] == '-')
			dash++;
		if (s[i] == '\0')
			return (0);
	}

	/* if sign is odd, then integer is negative */
	if (dash % 2 == 0)
		sign = 1;
	else
		sign = -1;

	/* The real juice, converting string to integer */
	for (num = 0; s[i] >= '0' && s[i] <= '9'; i++)
	{
		/**
		 * s[i] - '0' == convert ASCII value of s[i] subtract ASCII
		 * value of '0' to convert the string to integer
		 */
		num = 10 * num + (s[i] - '0');
	}
	return (sign * num);
}
