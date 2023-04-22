#include "main.h"

/**
 * print_pointer - a function that prints the address of a value
 * @ap: va_list
 * @count: word count
 *
 * Return: count
 */

int print_pointer(va_list ap, int count)
{
	char *str = "(nil)";
	int i;
	unsigned long int address;
	void *ptr = va_arg(ap, void *);

	if (ptr == NULL)
	{
		for (i = 0; *(str + i) != '\0'; i++)
			count += _putchar(*(str + i));
		return (count);
	}

	address = (unsigned long int)ptr;
	count += _putchar('0');
	count += _putchar('x');
	count += print_num(address, 16, count, "0123456789abcdef");

	return (count);
}
