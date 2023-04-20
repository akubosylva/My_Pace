#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to add from s2 to s1
 *
 * Return: pointer to concatenated string or NULL if failed
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr = NULL;
	unsigned int len1 = 0, len2 = 0, i, j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; *(s1 + i) != '\0'; i++)
		len1++;
	for (j = 0; *(s2 + j) != '\0'; j++)
		len2++;
	if (n >= len2)
		n = len2;

	ptr = malloc((len1 + n + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		*(ptr + i) = *(s1 + i);
	for (j = i, k = 0; k < n; j++, k++)
		*(ptr + j) = *(s2 + k);
	*(ptr + j) = '\0';

	return (ptr);
}
