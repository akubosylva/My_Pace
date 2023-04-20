#include <stdio.h>

/**
 * main - point of function entry
 * Description: prints the name of the file it was compile from
 *
 * Return: 0
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
