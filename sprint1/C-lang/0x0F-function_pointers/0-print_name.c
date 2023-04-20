#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * @name: pointer to name
 * @f: function pointer
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
