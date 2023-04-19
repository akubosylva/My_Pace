#include <stdio.h>

/**
 * main - point of function entry
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: integer
 */

int main(int argc, __attribute__((unused))char *argv[])
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
