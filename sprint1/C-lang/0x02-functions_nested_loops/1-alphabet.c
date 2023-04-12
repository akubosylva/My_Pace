#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - point of function entry
 * Description: prints alphabets in lowercase
 *
 * Return: zero
 */

void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');

}
