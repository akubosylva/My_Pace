#include <stdio.h>

/**
 * main - point of function entry
 * Description: Print alphabets in lowercase
 *
 * Return: Zero(0)
 */

int main(void)
{
	char alphabet = 'a';
	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');

	return (0);
}
