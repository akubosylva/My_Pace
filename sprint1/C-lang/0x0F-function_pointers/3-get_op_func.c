#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - function pointer to get functions
 * @s: function to get
 *
 * Return: integer
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i = 0, result;

	while (ops[i].op != NULL)
	{
		result = strcmp(s, ops[i].op);
		if (result == 0)
			return (ops[i].f);
		i++;
	}
	printf("Error\n");
	exit(99);
}
