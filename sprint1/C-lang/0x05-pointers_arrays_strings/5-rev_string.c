#include <stdio.h>
#include "main.h"

/**
 * rev_string - a function that reverses a sting
 * @s: string pointer
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, j, len = 0;
	char tmp;

	for (i = 0; *(s + i) != '\0'; i++)
		len++;

	for (i = 0, j = (len - 1); i < j; i++, j--)
	{
		tmp = *(s + i);
		*(s + i) = *(s + j);
		*(s + j) = tmp;
	}
}
