#include "main.h"

/**
 * print_Rot13 - prints strings in rot13 encoding
 * @ap: va_list parameter
 * @count: word count
 *
 * Return: count
 */

int print_Rot13(va_list ap, int count)
{
	char *s;
	int i = 0, j = 0;
	char arr[] = "NOPQRSTUVWXYZABCDEFGHIJKLM      nopqrstuvwxyzabcdefghijklm";

	s = va_arg(ap, char *);
	if (s == NULL)
		return (-1);
	while (*(s + i))
	{
		if ((*(s + i) >= 'A' && *(s + i) <= 'Z')
				|| (*(s + i) >= 'a' && *(s + i) <= 'z'))
		{
			j = (*(s + i) - 65);
			count += _putchar(arr[j]);
		}
		else
			count += _putchar(*(s + i));
		i++;
	}
	return (count);
}
