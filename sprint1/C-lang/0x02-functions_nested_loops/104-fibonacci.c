#include <stdio.h>
#define LIMIT 1000000000

/**
 * main - point of function entry
 * Description: Write a program that finds and prints the 
 * first 98 Fibonacci numbers, starting with 1 and 2,
 * followed by a new line
 *
 * Return: zero(0)
 */

/* not yet working */

int main(void)
{
	int i, overflow;
	unsigned long n1 = 1;
	unsigned long n2 = 1;
	unsigned long sum = 0;
	long n1_begin, n1_end, n2_begin, n2_end, sum_begin, sum_end;

	printf("1");
	
	for (i = 2; i < 93; i++)
	{
		sum = n1 + n2;
		n1 = n2;
		n2 = sum;
		printf(", %lu", sum);
	}
	n1_begin = n1 / LIMIT;
	n1_end = n1 % LIMIT;
	n2_begin = n2 / LIMIT;
	n2_end = n2 % LIMIT;

	for (; i < 99; i++)
	{
		overflow = (n1_begin + n2_begin) / LIMIT;
		sum_begin = (n1_begin + n2_begin) + overflow;
		sum_end = (n1_end + n2_end) - (overflow * LIMIT);

		printf(", %lu%lu", sum_begin, sum_end);

		n1_begin = n2_begin;
		n1_end = n2_end;
		n2_begin = sum_begin;
		n2_end = sum_end;
	}

	printf("\n");

	return (0);
}
