#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints alpahbet in lowercase ten times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char alpha; 
	int line = 0;
	while (line < 10)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');

		line++;
	}
}
