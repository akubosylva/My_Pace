#include "main.h"

/**
 * main - point of function entry
 * @argv: argument vectors
 * @argc: argument count
 *
 * Return: Zero(0) or (-1)
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		fprintf(STRERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

}
