#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char
 * @size: size of byte
 * @c: character parameter
 *
 * Return: character pointer
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr = NULL;

	if (size == 0)
		return (NULL);
	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(ptr + i) = c;

	return (ptr);
}
