#include "lists.h"

/**
 * free_dlistint - a function that frees a dlistint_t list
 * @head: first node pointer
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;

	while (head && head->next)
	{	
		head = head->next;
		free(head->prev);
	}
	free(head);
}
