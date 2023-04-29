#include "shell.h"

int shell_launch(char **args)
{
	pid_t pid, pidd;
	int status;

	pid = fork();
	if (pid == 0)
	{
		if (execvp(args[0], args) == -1)
			perror("my_shell");
		exit(EXIT_FAILURE);
	}
	else if (pid < 0)
		perror("my_shell");
	else
	{
		do
		{
			pidd = waitpid(pid, &status, WUNTRACED);
		} while (!WIFEXITED(status) && !WIFSIGNALED(status));
	}
	return (1);
}
