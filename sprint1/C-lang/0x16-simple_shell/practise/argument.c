#include "main.h"

/**
 * main - point of function entry
 * Description: prints '$' to terminal waiting for command
 *
 * Return: 0
 */

int main(int agrc, char *argv[])
{
	int idx = 0;

	while (argv[idx])
	{
		printf("argv[%d]: %s\n", idx, argv[idx]);
		idx++;
	}
	return (0);
}
