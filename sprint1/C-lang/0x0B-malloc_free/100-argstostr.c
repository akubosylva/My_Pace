#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - a function that concatenates all the arguments
 * of your program
 * @ac: argument count
 * @av: argument vactor
 *
 * Return: character pointer
 */

char *argstostr(int ac, char **av)
{
	char *ptr = NULL;
	int i, j, k, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 1; av[i][j] != '\0'; j++)
			;
		len += j;
	}
	ptr = malloc(len * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0, k = 0; i < ac; i++, k++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			*(ptr + k) = av[i][j];
		*(ptr + k) = '\n';
	}
	return (ptr);
}
