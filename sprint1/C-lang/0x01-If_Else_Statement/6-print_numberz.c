#include <stdio.h>

/**
 * main - point of function entry
 * Description: print single digit of base 10
 *
 * Return: zero
 */

int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar(num);
		num++;
	}
	putchar('\n');

	return (0);
}
