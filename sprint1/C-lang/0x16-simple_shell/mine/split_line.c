#include "shell.h"
#define LSH_TOK_BUFSIZE 64
#define LSH_TOK_DELIM " \t\r\n\a"

char **split_line(char *line)
{
  int bufsize = LSH_TOK_BUFSIZE, position = 0;
  char **tokens = malloc(bufsize * sizeof(char*));
  char *token;

  if (!tokens) {
    fprintf(stderr, "lsh: allocation error\n");
    exit(EXIT_FAILURE);
  }

  token = strtok(line, LSH_TOK_DELIM);
  while (token != NULL) {
    tokens[position] = token;
    position++;

    if (position >= bufsize) {
      bufsize += LSH_TOK_BUFSIZE;
      tokens = realloc(tokens, bufsize * sizeof(char*));
      if (!tokens) {
        fprintf(stderr, "lsh: allocation error\n");
        exit(EXIT_FAILURE);
      }
    }

    token = strtok(NULL, LSH_TOK_DELIM);
  }
  tokens[position] = NULL;
  return tokens;
}
/**
 * is_word - a function that count number of words in a string
 * @s: string pointer
 *
 * Return: length of word
 */

/*int is_word(char *s)
{
	int i = 0, len = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == ' ' || *(s + i) == '\t' || *(s + i) == '\r'
				|| *(s + i) == '\n' || *(s + i) == '\a')
			i++;

		len++, i++;
	}
	return (len);
}
*/
/**
 * split_line - a function that splits a string into words
 * @str: string parameter
 *
 * Return: character pointer to a pointer
 */
/*
char **split_line(char *str)
{
	char **ptr, *word;
	int i, j, len, total_len;

	if (str == NULL || *str == 0)
		return (NULL);
	total_len = is_word(str);
	if (total_len == 0)
		return (NULL);
	total_len += 1;
	ptr = malloc(total_len * sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; *str != '\0' && i < total_len; str++)
	{
		if (*str == ' ')
			;
		else
		{
			word = str;
			for (len = 0; *str != ' ' && *str != '\0'; len++,str++)
				ptr[i] = malloc((len + 1) * sizeof(char));
			if (ptr[i] == NULL)
				return (NULL);
			for (j = 0; *word != ' ' && *word != '\0'; j++, word++)
				ptr[i][j] = *word;
			ptr[i][j] = '\0';
			i++;
		}
	}
	return (ptr);
}*/
