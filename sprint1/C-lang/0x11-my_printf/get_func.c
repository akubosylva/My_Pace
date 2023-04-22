#include "main.h"

/**
 * get_func_print - a function pointer that get the function to print
 * a format specifier
 * @c: placeholder character
 * @ap: va_list parameter
 * @count: word_count parameter
 *
 * Return: count;
 */

int (*get_func_print(char c))(va_list, int)
{
	func funcArr[] = 
	{
		{'c', print_char},
		{'s', print_string},
		{'d', print_int},
		{'i', print_int},
		{'b', print_binary},
		{'u', print_unsigned},
		{'o', print_octal},
		/*{'x', print_hex},
		{'X', print_Hex},
		{'S', print_non_printable},
		{'p', print_pointer},
		{'l', print_long},
		{'h', print_short},
		{'r', print_reverse},
		{'R', print_Rot13},*/
		{'\0', NULL}
	};

	int i;

	for (i = 0; funcArr[i].placeholder != '\0'; i++)
	{
		if (funcArr[i].placeholder == c)
			return (funcArr[i].f);
	}
	return (NULL);
}
