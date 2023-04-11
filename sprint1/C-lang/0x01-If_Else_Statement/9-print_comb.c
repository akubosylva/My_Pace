#include <stdio.h>

/**
 * main - point of function entry
 * Description: Prints all possible combination of single-digits
 *
 * Return: zero
 */

int main(void)
{
	char num = '0';
	while (num <= '9')
	{
		putchar(num);
		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');

	return (0);
}
