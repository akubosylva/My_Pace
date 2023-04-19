#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - a function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of the
 * string given as a parameter
 * @str: string parameter
 *
 * Return: character pointer
 */

char *_strdup(char *str)
{
	int i, len = 0;
	char *ptr = NULL;

	if (str == NULL)
		return (NULL);
	for (i = 0; *(str + i) != '\0'; i++)
		len++;
	ptr = malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		*(ptr + i) = *(str + i);

	return (ptr);
}
