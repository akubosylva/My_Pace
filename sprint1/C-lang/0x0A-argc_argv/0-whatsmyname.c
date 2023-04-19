#include <stdio.h>

/**
 * main - point of function entry
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: integer
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
