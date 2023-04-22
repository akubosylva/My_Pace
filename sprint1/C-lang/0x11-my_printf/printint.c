#include "main.h"

/**
 * print_int - a function that prints integer values to stdout
 * @ap: va_list argument
 * @count: word count
 *
 * Return: count
 */

int print_int(va_list ap, int count)
{
	int num;

	num = va_arg(ap, int);
	if (num < 0)
	{
		num = (-1 * num);
		count += _putchar('-');
	}
	count += print_num(num, 10, count);

	return (count);
}
