#include <stdio.h>
#include "main.h"

/**
 * len - search a string forward
 * @s: string to search
 *
 * Return: length of string
 */

int len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + len(s + 1));
}

/**
 * compare - search string in reverse
 * @a: begin string to search
 * @z: end of string
 *
 * Return: 1 if same and 0 if not
 */

int compare(char *a, char *z)
{
	if (a >= z)
		return (1);
	if (*a == *z)
		return (compare((a + 1), (z - 1)));
	return (0);
}

/**
 * is_palindrome - check pf palindrome
 * @s: string to search
 *
 * Return: 1 if not and 0 if palindrome
 */

int is_palindrome(char *s)
{
	int strlen = len(s);

	return (compare(s, (s + strlen - 1)));
}
