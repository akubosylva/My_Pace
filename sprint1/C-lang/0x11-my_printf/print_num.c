#include "main.h"

/**
 * print_digit - a function that prints
 * @num: integer
 * @base: base
 * @count: count
 * @digit: digit
 *
 * Return: count
 */

int print_digit(int num, unsigned long int base, int count, const char *digit)
{
	if ((num / base) > 0)
		print_digit((num / base), base, count++, digit);
	_putchar(digit[num % base]);

	return (count);
}

/**
 * print_num - used to print numbers to various bases to stdout
 * @num: number to print
 * @base: base to print to
 * @count: count
 *
 * Return: count
 */

int print_num(unsigned long int num, unsigned long int base, int count, const char *digits)
{
	if (num >= base)
		print_num((num / base), base, count++, digits);
	_putchar(digits[num % base]);

	return (count);
}
