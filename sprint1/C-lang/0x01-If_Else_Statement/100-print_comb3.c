#include <stdio.h>

/**
 * main - point of function entry
 * Description: prints all possible combination of two digits
 *
 * Return: zero
 */

int main(void)
{
	int i, j;

	for(i = '0'; i <= '9'; i++)
	{
		for(j = (i + 1); j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
			if (i != '8' || j != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
