#include <stdio.h>
#define LIMIT 4000000

/**
 * main - point of function entry
 * Description: Fibonacci sequence whose values do not exceed
 * 4,000,000, a program that finds and prints 
 * the sum of the even-valued terms
 *
 * Return: zero(0)
 */

int main(void)
{
	unsigned long int fst = 1;
	unsigned long int sec = 2;
	unsigned long int sum = 0;
	unsigned long int new = 0;
	int i;

	for (i = 0; sum <= LIMIT; i++)
	{
		if ((fst % 2) == 0 && sum <= LIMIT)
			sum += fst;
		if ((sec % 2) == 0 && sum <= LIMIT)
			sum += sec;

		new = fst + sec;
		fst = new;
		sec = fst + sec;
	}
	printf("%lu\n", sum);

	return (0);
}
