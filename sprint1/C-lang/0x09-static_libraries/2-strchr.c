#include <stdio.h>
#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: string parameter
 * @c: character parameter
 *
 * Return: character pointer
 */

char *_strchr(char *s, char c)
{
	int i;
	char *ptr = NULL;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			ptr = (s + i);
			return (ptr);
		}
	}
	return (ptr);
}
