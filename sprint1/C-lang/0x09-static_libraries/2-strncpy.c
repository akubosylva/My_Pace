#include <stdio.h>
#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination
 * @src: source
 * @n: number
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j; 

	for (j = 0; *(src + j) != '\0' && j < n; j++)
		*(dest + j) = *(src + j);
	/**
	 * if all of src has been copied and there is space in dest,
	 * i.e length of src(j) < n, fill the rest with null byte
	 */
	for ( ; j < n; j++)
		*(dest + j) = '\0';

	return (dest);
}
