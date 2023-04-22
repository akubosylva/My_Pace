#include "main.h"

/**
 * print_hex - a function that prints integer in hexadecimal
 * @ap: va_list parameter
 * @count: count
 *
 * Return: count
 */

int print_hex(va_list ap, int count)
{
	unsigned int num;

	num = va_arg(ap, unsigned int);
	count += print_num(num, 16, count, "0123456789abcdef");

	return (count);
}

/**
 * print_Hex - function that print integer in Hexadecimal uppercase
 * @ap: va_list parameter
 * @count: word count
 *
 * Return: count
 */

int print_Hex(va_list ap, int count)
{
	unsigned int num;

	num = va_arg(ap, unsigned int);
	count += print_num(num, 16, count, "0123456789ABCDEF");

	return (count);
}
