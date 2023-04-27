#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

/**
 * main - point of function entry
 * Description: to get the parent process ID
 *
 * Return: zero(0)
 */

int main(void)
{
	pid_t my_ppid;

	my_ppid = getppid();
	printf("%u\n", my_ppid);

	return (0);
}
