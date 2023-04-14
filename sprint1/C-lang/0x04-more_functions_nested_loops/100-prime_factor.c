#include <stdio.h>
#define NUM 612852475143

/**
 * main - point of function entry
 * Description:  program that finds and prints the largest prime 
 * factor of the number 612852475143, followed by a new line
 *
 * Return: zero(0)
 */

int main(void)
{
	int divisor = 2;
	long int num = NUM;

	while (num != 0 && divisor < num)
	{
		if (num % divisor != 0)
			divisor++;
		else
			num = num / divisor;
	}
	printf("%d\n", divisor);

	return (0);
}
