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
	char *str = "(nil)";
	int i, j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	s = va_arg(ap, char *);
	if (s == NULL)
	{
		for (i = 0; *(str + i) != '\0'; i++)
			count += _putchar(*(str + i));
		return (count);
	}

	for (i = 0; *(s + i) != '\0'; i++)
	{
		j = 0;
		while (*(s + i) != *(a + j) && *(a + j) != '\0')
			j++;
		if (*(s + i) == *(a + j))
		{
			*(s + i) = *(b + j);
			count += _putchar(*(s + i));
		}
	}
	return (count);
}
