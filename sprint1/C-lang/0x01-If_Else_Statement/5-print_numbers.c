#include <stdio.h>

/**
 * main - point of function entry
 * Description: print numbers of base 10
 *
 * Return: zero
 */

int main(void)
{
	char num = '0';
	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');

	return (0);
}
