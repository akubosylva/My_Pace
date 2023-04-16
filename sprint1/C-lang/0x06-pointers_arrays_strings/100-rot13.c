#include <stdio.h>
#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13
 * @s: string parameter
 *
 * Return: charater pointer
 */

char *rot13(char *s)
{
	int i, j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(s + i) != '\0'; i++)
	{
		j = 0;
		while (*(s + i) != *(a + j) && *(a + j) != '\0')
			j++;
		if (*(s + i) == *(a + j))
			*(s + i) = *(b + j);
	}

	return (s);
}
