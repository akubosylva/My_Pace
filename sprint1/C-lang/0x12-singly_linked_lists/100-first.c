#include <stdio.h>

/**
 * before_main - print to stdout before execution os main function
 * Note: made possible by prior declaration
 * of "__attribute__ ((constructor))"
 */

void __attribute__ ((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I must bore my house upon my back!\n");
}
