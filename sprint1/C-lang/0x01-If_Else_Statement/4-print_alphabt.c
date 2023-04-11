#include <stdio.h>

/**
 * main - point of function entry
 * Description: Print alphabet in lowercase except 'q' and 'e'
 *
 * Return: Zero(0)
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha != 'e' && alpha != 'q')
			putchar(alpha);
		alpha++;
	}

	putchar('\n');

	return (0);
}
