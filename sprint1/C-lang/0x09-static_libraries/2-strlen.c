#include <stdio.h>
#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: pointer parameter
 *
 * Return: length of a string;
 */

int _strlen(char *s)
{
	int i = 0, len;

	for (i = 0; s[i] != '\0'; i++)
		len++;

	return (len);
}
