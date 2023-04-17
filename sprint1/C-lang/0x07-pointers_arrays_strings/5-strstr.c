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
	int i, j, k;
	char *ptr = NULL;

	if (needle[0] == '\0')
		return (haystack);

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		if (*(haystack + i) == (needle[0]))
		{
			k = i, j = 0;
			while (*(needle + j) != '\0')
			{
				if (*(needle + j) == *(haystack + k))
					j++, k++;
				else
					break;
			}
			if (*(needle + j) == '\0')
				return (haystack + i);
		}
	}
	return (ptr);
}
