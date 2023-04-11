#include <stdio.h>

/**
 * main - point of function entry
 * Description: Print alphabets in upper and lower cases
 *
 * Return: zero(0)
 */

int main(void)
{
	char small = 'a';
	char big = 'A';

	while (small <= 'z')
	{
		putchar(small);
		small++;
	}
	while (big <= 'Z')
	{
		putchar(big);
		big++;
	}
	putchar('\n');

	return (0);
}
