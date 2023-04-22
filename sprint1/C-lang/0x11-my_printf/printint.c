#include "main.h"

/**
 * print_num - recursive function that print numbers
 * @num: number to print
 * @count: word count
 * Return: count
 */

int print_num(int num, int count)
{
	if (num < 0)
	{
		num = (-1 * num);
		count += _putchar('-');
	}
	if ((num / 10) > 0)
		print_num((num / 10), count++);
	_putchar((num % 10) + '0');

	return (count);
}

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
	count += print_num(num, count);

	return (count);
}
