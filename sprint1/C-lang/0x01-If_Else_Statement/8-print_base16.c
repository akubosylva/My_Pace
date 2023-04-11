#include <stdio.h>

/**
 * main - point of function entry
 * Description: prints all numbers in base 16 lowercase
 *
 * Return: zero
 */

int main(void)
{
	char num = '0';
	char alpha = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
