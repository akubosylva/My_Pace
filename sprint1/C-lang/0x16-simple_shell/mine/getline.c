#include "shell.h"
#define BUF 1024

char *get_line(void)
{
	int bufsize = BUF;
	int position = 0;
	char *buffer = malloc(sizeof(char) * bufsize);
	int c;

	if (!buffer)
	{
		fprintf(stderr, "my_shell: Allocation failed\n");
		exit(EXIT_FAILURE);
	}

	while (1)
	{
		c = getchar();
		if (c == '\n' || feof(stdin))
		{
			buffer[position] = '\0';
			return (buffer);
		}
		else
			buffer[position] = c;
		position++;

		if (position >= bufsize)
		{
			bufsize += BUF;
			buffer = realloc(buffer, bufsize);

			if (!buffer)
			{
				fprintf(stderr, "my_shell: Allocation failed\n");
				exit(EXIT_FAILURE);
			}
		}
	}
}
