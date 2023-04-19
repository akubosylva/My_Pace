#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: character pointer
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k, len1 = 0, len2 = 0, Tlen = 0;
	char *ptr = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; *(s1 + i) != '\0'; i++)
		len1++;
	for (j = 0; *(s2 + j) != '\0'; j++)
		len2++;
	Tlen = len1 + len2;
	ptr = malloc((Tlen + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; *(s1 + i) != '\0'; i++)
		*(ptr + i) = *(s1 + i);
	for (j = i, k = 0; j < Tlen; j++, k++)
		*(ptr + j) = *(s2 + k);
	*(ptr + j) = '\0';
	return (ptr);
}
