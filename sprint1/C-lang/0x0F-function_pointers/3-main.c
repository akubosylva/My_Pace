#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - point of function entry
 * Description: a function that calculate input from the cml and print
 * to stdout
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: zero(0)
 */

int main(int argc, char *argv[])
{
	int result = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	
	result = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", result);
	return (0);
}
