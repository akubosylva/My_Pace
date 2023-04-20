#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * is_word - a function that count number of words in a string
 * @s: string pointer
 *
 * Return: length of word
 */

int is_word(char *s)
{
	int i = 0, len = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == ' ')
			i++;

		len++, i++;
	}
	return (len);
}

/**
 * strtwo - a function that splits a string into words
 * @str: string parameter
 *
 * Return: character pointer to a pointer
 */

char **strtow(char *str)
{
	char **ptr, *word;
	int i, j, len, total_len;

	if (str == NULL || *str == 0)
		return (NULL);
	total_len = is_word(str);
	if (total_len == 0)
		return (NULL);
	total_len += 1;
	ptr = malloc(total_len * sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; *str != '\0' && i < total_len; str++)
	{
		if (*str == ' ')
			;
		else
		{
			word = str;
			for (len = 0; *str != ' ' && *str != '\0'; len++,str++)
				ptr[i] = malloc((len + 1) * sizeof(char));
			if (ptr[i] == NULL)
				return (NULL);
			for (j = 0; *word != ' ' && *word != '\0'; j++, word++)
				ptr[i][j] = *word;
			ptr[i][j] = '\0';
			i++;
		}
	}
	return (ptr);
}
