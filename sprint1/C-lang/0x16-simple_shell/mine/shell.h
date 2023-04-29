#ifndef _SHELL_
#define _SHELL_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

struct builtin {
	char *name;
	int (*func)(char **args);
};

void bring_prompt(void);
char *get_line(void);
int is_word(char *s);
char **split_line(char *str);
int shell_launch(char **args);
int shell_execute(char **args);
int lsh_cd(char **args);
int lsh_help(char **args);
int lsh_exit(char **args);
int lsh_num_builtins();

#endif /* _SHELL_ */
