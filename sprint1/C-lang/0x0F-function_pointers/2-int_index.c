#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @size: size of an array
 * @array: array of element
 * @cmp: function pointer
 *
 * Return: the index of the first element for which
 * the cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, result;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		while (i < size)
		{
			result = cmp(*(array + i));
			if (result != 0)
				return (i);
			i++;
		}
	}
	return (-1);
}
