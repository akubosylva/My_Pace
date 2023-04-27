#include "main.h"

/**
 * main - pointer of function entry
 *
 * Return: -1 if error or 0
 */

int main(int argc, char *argv[])
{
	char *line = NULL;
	size_t len = 0;
	ssize_t nread;

	printf("$ ");
	nread = getline(&line, &len, stdin);
	printf("%s", line);
	printf("Number of characters: %ld\n", nread);

	free(line);
	exit(EXIT_SUCCESS);
}
