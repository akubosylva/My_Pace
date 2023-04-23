#include "main.h"

/**
 * _printf - a function that prints formatted output in similar way
 * as the printf() in C_language
 * Description: this is variadic function that can take multiple input
 * @format: a string character
 * 
 * Return: the number of characters printed excluding the null byte
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int (*get_func_ptr)(va_list, int);
	int count = 0, i = 0;
	
	va_start(ap, format);

	while (format && *(format + i))
	{
		if (*(format + i) == '%')
		{
			i++;
			if (*(format + i) == '%')
			{
				count += _putchar(*(format + i));
				i++;
				continue;
			}
			if (*(format + i) == '\0')
				return (-1);
			get_func_ptr = get_func_print(*(format + i));
			if (get_func_ptr == NULL)
			{
				count += _putchar(*(format + (i - 1)));
				count += _putchar(*(format + i));
			}
			else
				count = get_func_ptr(ap, count);
			i++;
		}
		else
		{
			count += _putchar(*(format + i));
			i++;
		}
	}
	va_end(ap);

	return (count);
}
