#include "main.h"

/**
 * print_binary - prints integer variable as binary to stdout
 * @ap: va_list parameter
 * @count: word count
 *
 * Return: count
 */

int print_binary(va_list ap, int count)
{
	int num;

	num = va_arg(ap, int);
	count += print_num(num, 2, count);

	return (count);
}
