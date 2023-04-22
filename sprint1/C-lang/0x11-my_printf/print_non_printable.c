#include "main.h"

/**
 * print_non_printable - prints hex value of non printable ascii
 * @ap: va_list parameter
 * @count: count
 *
 * Return: count
 */

int print_non_printable(va_list ap, int count)
{
	int i = 0;
	char *str;

	str = va_arg(ap, char *);
	if (str == NULL)
	{
		count += _putchar('(');
		count += _putchar('n');
		count += _putchar('i');
		count += _putchar('l');
		count += _putchar(')');

		return (count);
	}

	while (*(str + i) != '\0')
	{
		if ((*(str + i) > 0 && *(str + i) < 32) || *(str + i) >= 127)
		{
			if (*(str + i) < 15)
			{
				count += _printf("\\x0");
				count += _printf("%X", *(str + i));
				i++;
			}
			else
			{
				count += _printf("\\x");
				count += _printf("%X", *(str + i));
				i++;
			}
		}
		else
		{
			count += _putchar(*(str + i));
			i++;
		}
	}

	return (count);
}
