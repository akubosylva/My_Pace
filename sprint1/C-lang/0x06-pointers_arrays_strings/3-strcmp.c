#include <stdio.h>
#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 0, if s1 and s2 are equal, -diff is s1 < s2,
 * and +diff if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			if (s1[i + 1] == '\0' || s2[i + 1] == '\0')
				return (0);
			i++;
		}
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}
