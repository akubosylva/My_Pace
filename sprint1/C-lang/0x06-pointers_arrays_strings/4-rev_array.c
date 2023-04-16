#include <stdio.h>
#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array
 * of integers
 * @a: integer pointer parameter
 * @n: number
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j, tmp;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		tmp = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = tmp;
	}
}
