#include <stdio.h>
#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: main string to be scanned
 * @accept: string containing list of characters to match in @s
 *
 * Return: number of character in @s which consist only of characters
 * from @accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(accept + j) == *(s + i))
				break;
			if (*(accept + j) != *(s + i) && *(accept + j + 1) == '\0')
				return (i);
		}
	}
	return (i);
}
