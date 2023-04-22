#include "main.h"

/**
 * print_num - used to print numbers to various bases to stdout
 * @num: number to print
 * @base: base to print to
 * @count: count
 *
 * Return: count
 */

int print_num(int num, int base, int count)
{
	if ((num / base) > 0)
		print_num((num / base), base, count++);
	_putchar((num % base) + '0');

	return (count);
}
