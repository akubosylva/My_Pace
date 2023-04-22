#include "main.h"
#define LIMIT 100000

/**
 * print_unsigned - a function that prints unsigned integer
 * @ap: va_list parameter
 * @count word count
 *
 * Return: count
 */

int print_unsigned(va_list ap, int count)
{
	unsigned int num;


	num = va_arg(ap, unsigned int);
	
	count += print_num(num, 10, count, "0123456789");

	return (count);
}
