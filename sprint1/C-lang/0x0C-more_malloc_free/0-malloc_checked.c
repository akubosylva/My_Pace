#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: byte space to allocate
 *
 * Return: void pointer or exit(98) if failed
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = NULL;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
