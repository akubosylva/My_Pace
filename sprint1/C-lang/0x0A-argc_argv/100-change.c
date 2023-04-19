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
	int num, sum = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	sum += num / 25;
	num = num % 25;
	sum += num / 10;
	num = num % 10;
	sum += num / 5;
	num = num % 5;
	sum += num / 2;
	num = num % 2;
	sum += num / 1;

	printf("%d\n", sum);
	return (0);
}
