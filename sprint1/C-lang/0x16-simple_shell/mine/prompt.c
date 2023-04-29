#include "shell.h"

void bring_prompt(void)
{
	char *line;
	char **args;
	int status;

	do
	{
		printf("$ ");
		line = get_line();
		args = split_line(line);
		status = shell_execute(args);

		free(line);
		free(args);
	} while (status);
}
