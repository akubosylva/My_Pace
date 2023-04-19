#include <stdio.h>
#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest: destination
 * @src: source
 * @n: number
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, len = 0;

	for (i = 0; *(dest + i) != '\0'; i++)
		len++;
	for (j = 0; *(src + j) != '\0' && j < n; j++, len++)
		*(dest + len) = *(src + j);
	*(dest + len) = '\0';

	return (dest);
}
