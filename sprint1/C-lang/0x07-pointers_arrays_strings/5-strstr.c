#include <stdio.h>
#include "main.h"

/**
 * _strstr - a function that locates a string
 * @haystack: string to be searched
 * @needle: string been search for in the haystack
 *
 * Return: pointer to the beginning of the string located
 * or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;
	char *ptr = NULL;

	while (*(needle + i) != '\0')
	{
		while (*(haystack + j) != '\0')
		{
			if (*(needle + i) == *(haystack + j))
			{
				ptr = (haystack + j);
				return (ptr);
			}
			j++;
		}
		i++;
	}
	return (ptr);
}
