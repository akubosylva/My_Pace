#include <stdio.h>

/**
 * main - point of function entry
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: integer
 */

int main(int argc, char *argv[])
{
	int i;
	
	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
