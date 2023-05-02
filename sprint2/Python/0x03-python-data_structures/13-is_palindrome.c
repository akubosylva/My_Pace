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
	unsigned int length = 0, i = 0;
	int data[1024]; /* create an array to hold data */

	if (head == NULL) /* if there is no list */
		return (0);
	while (tmp) /* find length of the list */
	{
		tmp = tmp->next;
		length++;
	}
	if (length == 1) /* an empty list is considered a palindrome */
		return (1);
	tmp = *head;
	while (tmp) /* fill array with data */
	{
		data[i] = tmp->n;
		tmp = tmp->next;
		i++;
	}
	for (i = 0; i < (length / 2); i++)
	{
		/* if data differ return zero(0) */
		if (data[i] != data[length - i - 1])
			return (0);
	}
	return (1);
}
