#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - a function that prints the sum of the two diagonal
 * of a square matrix of integers
 * @a: integer pointer parameter
 * @size: size of the array
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;
	int k = (size * size);

	for (i = 0; i < k; i += (size + 1))
		sum1 += *(a + i);
	for (j = (size - 1); j < (k - 1); j += (size - 1))
		sum2 += *(a + j);
	printf("%d, %d\n", sum1, sum2);
}
