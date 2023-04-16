#include <stdio.h>
#include "main.h"

/**
 * string_toupper - a function that changes all lowercase 
 * letters of a string to uppercase
 * @s: string
 *
 * Return: pointer to character
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) = *(s + i) - 32;
		else
			*(s + i) = *(s + i);
	}
	return (s);
}
