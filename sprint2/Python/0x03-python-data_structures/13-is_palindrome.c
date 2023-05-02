#include "lists.h"

/**
 * is_palidrome - a function in C that checks if a singly
 * linked list is a palindrome
 * @head: pointer to the first node pointer
 *
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
 */

int is_palindrome(listint_t **head)
{
	listint_t *tmp = *head; 
	unsigned int length = 0, i;
	int data[1024]; /* create buffer to hold characters for comparison*/

	if (head == NULL)
		return (0);
	if (*head == NULL)
		return (1);
	while (tmp) /*find length of list*/
	{
		tmp = tmp->next;
		length += 1;
	}
	if (length == 1) /* a single character is a palidrome */
		return (1);
	tmp = *head;
	while (tmp) /* copying to buffer */
	{
		data[i++] = tmp->n;
		tmp = tmp->next;
	}
	for (i = 0; i <= (length / 2); i++)
	{
		/* comparing the characters from biginning to the middle */
		if (data[i] != data[length - i - 1])
			return (0);
	}
	return (1);
}
