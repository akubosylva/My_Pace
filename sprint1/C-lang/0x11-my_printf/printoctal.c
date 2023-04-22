#include "main.h"

/**
 * print_octal - a function that printf integers to octal base
 * @ap: va_list parameter
 * @count: word: count
 * 
 * Return: count
 */

int print_octal(va_list ap, int count)
{
	unsigned int num;

	num = va_arg(ap, unsigned int);

	count += print_num(num, 8, count);

	return (count);
}
