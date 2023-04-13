#include <stdio.h>

/**
 * main - point of function entry
 * Description: prints the first 50 Fibonacci numbers, starting with
 * 1 and 2
 *
 * Return: zero(0)
 */

int main(void)
{
	unsigned long int fst = 1;
	unsigned long int sec = 2;
	unsigned long int new = 0;
	int i;

	for (i = 0; i < 25; i++)
	{
		printf("%lu and %lu\n", fst, sec);
		new = fst + sec;
		fst = new;
		sec = fst + sec;
	}

	return (0);
}
