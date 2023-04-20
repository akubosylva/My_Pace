#include <stdlib.h>
#include "main.h"

/**
 * _realloc - a function that reallocates a memory block
 * using malloc and free
 * @ptr: void pointer to previous memory location
 * @old_size: size of old buffer
 * @new_size: size of new buffer
 *
 * Return: void pointer or NULL if failed
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr1 = NULL;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr1 = malloc(new_size);
		if (ptr1 == NULL)
			return (NULL);
		else
			return (ptr1);
	}

	ptr1 = malloc(new_size);
	if (ptr1 == NULL)
		return (NULL);
	if (new_size > old_size)
		for (i = 0; i < old_size; i++)
			*((char *)ptr1 + i) = *((char *)ptr + i);
	free(ptr);

	return (ptr1);
}
