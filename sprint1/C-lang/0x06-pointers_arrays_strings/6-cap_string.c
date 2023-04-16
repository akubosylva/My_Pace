#include <stdio.h>
#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 * @s: string parameter
 *
 * Return: character pointer
 */

char *cap_string(char *s)
{
	char string[13] = {',',' ','\t',';','.','!','?','"','(',')','{','}','\n'};
	int i, j = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (*(string + j) == *(s + i))
			{
				if (*(s + i + 1) >= 'a' && *(s + i + 1) <= 'z')
					*(s + i + 1) = (*(s + i + 1) - 32);
				*(s + i + 1) = *(s + i + 1);
			}
		}
	}
	return (s);
}
