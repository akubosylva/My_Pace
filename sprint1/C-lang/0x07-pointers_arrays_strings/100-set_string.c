#include <stdio.h>
#include "main.h"

/**
 * set_string - a function that sets the value of a pointer to a char
 * @s: pointer to a pointer parameter
 * @to: string pointer parameter
 *
 * Return: void
 */

void set_string(char **s, char *to)
{
	/**
	 * dereference pointer to a pointer and store a pointer
	 * *(*s) == &s;
	 */

	*s = to;
}
