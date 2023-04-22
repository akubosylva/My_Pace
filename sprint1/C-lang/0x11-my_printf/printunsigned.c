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
	int num_head, num_tail;

	num = va_arg(ap, unsigned int);
	
	num_head = (num / LIMIT);
	num_tail = (num % LIMIT);
	count += print_num(num_head, 10, count);
	count += print_num(num_tail, 10, count);
	
	return (count);
}
