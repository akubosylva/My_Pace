#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - a function that creates an array of integers
 * @min: mininum number
 * @max: maximum number
 *
 * Return: pointer to the newly created array or NULL if failed
 */

int *array_range(int min, int max)
{
	int *ptr = NULL;
	int i, j;
	int k = (max - min + 1);

	if (min > max)
		return (NULL);
	ptr = malloc(k * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0, j = min; i < k; i++, j++)
		*(ptr + i) = j;
	return (ptr);
}
