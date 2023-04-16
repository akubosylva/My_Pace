#include <stdio.h>
#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 * @s: string parameter
 *
 * Return: char pointer
 */

char *leet(char *s)
{
	char arr1[10] = {'a','A','e','E','o','O','t','T','l','L'};
	char arr2[10] = "4433007711";
	int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (*(s + i) == arr1[j])
				*(s + i) = arr2[j];
		}
	}
	return (s);
}
