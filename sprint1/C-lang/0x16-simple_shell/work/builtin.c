#include "shell.h"

char *builtin_str[] = {"cd", "help", "exit"};

int (*builtin_func[]) (char **) = {
	&lsh_cd,
	&lsh_help,
	&lsh_exit
};

int lsh_num_builtins()
{
	return (sizeof(builtin_str) / sizeof(char *));
}

int lsh_cd(char **args)
{
	if (args[1] == NULL)
		fprintf(stderr, "hsh: expected argument to \"cd\"\n");
	else
		if (chdir(args[1]) != 0)
				perror("hsh");
	return (1);
}

int lsh_help(char **args)
{
	int i;
	printf("Akubo Sylvanus's HSH\n");
	printf("Type program names and argument, and hit enter.\n");
	printf("The following are built in:\n");

	for (i = 0; i < lsh_num_builtins(); i++)
		printf(" %s\n", builtin_str[i]);
	printf("Use the man command for informantion on other programs.\n");
	return (1);
}

int lsh_exit(char **args)
{
	return (0);
}
