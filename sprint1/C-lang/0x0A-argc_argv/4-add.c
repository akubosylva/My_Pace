#include <stdio.h>
#include <stdlib.h>

/**
 * main - point of function entry
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: integer
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{	
		if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
