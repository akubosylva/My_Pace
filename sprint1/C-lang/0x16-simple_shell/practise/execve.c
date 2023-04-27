#include "main.h"

int main(int ac, char *av[])
{
	char *newArgv[] = {NULL, "Hey", "You", "There", "Welcome", NULL};
	char *newEnviron[] = {NULL};
	if (ac != 2)
	{
		fprintf(stderr, "Usage: %s <file>\n", av[0]);
		exit(EXIT_FAILURE);
	}
	newArgv[0] = av[1];
	execve(av[1], newArgv, newEnviron);
	perror("execve");
	exit(EXIT_SUCCESS);
}
