#include <stdio.h>

/**
 * main - point of function entry
 * Description: print lowercase characters in reverse
 *
 * Return: Zero
 *
 */

int main(void)
{
	char alpha = 'z';
	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');

    return (0);
}
