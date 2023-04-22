#include "main.h"
#define LIMIT 100000

/**
 * print_octal - a function that printf integers to octal base
 * @ap: va_list parameter
 * @count: word: count
 * 
 * Return: count
 */

int print_octal(va_list ap, int count)
{
	unsigned long int num;

	num = va_arg(ap, unsigned long int);
	count += print_num(num, 8, count, "01234567");

	return (count);
}
