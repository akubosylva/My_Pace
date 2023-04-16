#include <stdio.h>
#include "main.h"

/**
 * _strcat - the function appends the srcs string to the dest string
 * overwriting the termination null byte(\0) at the end of dest, 
 * and then adds a terminating null byte
 * @dest: destination
 * @src: source
 *
 * Return: dest pointer
 */

char *_strcat(char *dest, char *src)
{
	int i, j, len = 0;

	for (i = 0; *(dest + i) != '\0'; i++)
		len++;
	/*len--;*/

	for (j = 0; *(src + j) != '\0'; j++, len++)
		*(dest + len) = *(src + j);
	*(dest + len) = '\0';

	return (dest);
}
