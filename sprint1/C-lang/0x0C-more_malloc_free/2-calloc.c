#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - a function that allocates memory for array, using malloc
 * @nmemb: number of array element
 * @size: size of bytes
 *
 * Return: void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = NULL;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		*((char *)ptr + i) = 0;
	return (ptr);
}
