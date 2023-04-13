#include <stdio.h>
#include "main.h"

/**
 * _islower - checks for lowercase characters
 * @c : integer parameter
 * Return: one(1) if lowerccase and zero(0) otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
