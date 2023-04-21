#include <stdio.h>
#include <stdlib.h>

/**
 * main -point of function entry
 * Description: a function that prints the opscode of itself
 *
 * Return: integer
 */

int main(int argc, char *argv[])
{
	int (*file_name)(int, char **) = main;
	int i, j;
	unsigned char opscode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	i = atoi(argv[1]);
	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (j = 0; j < i; j++)
	{
		opscode = *(unsigned char *)file_name;
		printf("%.2x", opscode);

		if (j != (i - 1))
		{
			printf(" ");
			file_name++;
		}
	}
	printf("\n");
	return (0);
}
