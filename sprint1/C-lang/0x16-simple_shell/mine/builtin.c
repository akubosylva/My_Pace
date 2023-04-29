#include "shell.h"

struct builtin builtins[] = {
	{"help", lsh_help},
	{"exit", lsh_exit},
	{"cd", lsh_cd}
};

int lsh_num_builtins() {
  return sizeof(builtins) / sizeof(struct builtin);
}

/*
  Builtin function implementations.
*/
int lsh_cd(char **args)
{
  if (args[1] == NULL) {
	args[1] = "~";
    /*fprintf(stderr, "my_shell: expected argument to \"cd\"\n");*/
  } else {
    if (chdir(args[1]) != 0) {
      perror("my_shell");
    }
  }
  return 1;
}

int lsh_help(char **args)
{  
	char *helptext = 
		"A simple shell program by Akubo Sylvanus. "
		"The following commands are available:\n"
		"cd:	change the working directory.\n"
		"exit:	Exit the shell.\n"
		"help:	Print the help text\n";

  printf("%s\n", helptext);

  printf("Use the man command for information on other programs.\n");
  return 1;
}

int lsh_exit(char **args)
{
  return 0;
}

int shell_execute(char **args)
{
	int i;

	if (args[0] == NULL)
		return (1);

	for (i = 0; i < lsh_num_builtins(); i++)
		if (strcmp(args[0], builtins[i].name) == 0)
			return (builtins[i].func(args));
	return (shell_launch(args));
}
