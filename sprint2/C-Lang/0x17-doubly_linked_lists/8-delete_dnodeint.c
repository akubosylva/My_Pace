#include "lists.h"

/**
 * delete_dnodeint_at_index - a function that deletes the node
 * at index index of a dlistint_t linked list
 * @head: pointer to the first node pointer
 * @index: index of node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *del = NULL;
	if (!head || !(*head))
		return (-1);
	del = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(del);
		if (*head != NULL)
			(*head)->prev = NULL;
		return (-1);
	}
	while ((index != 0) && (del->next != NULL))
	{
		index -= 1;
		del = del->next;
	}
	if (index == 0)
	{
		del->prev->next = del->next;
		if (del->next != NULL)
			del->next->prev = del->prev;
		free(del);
		return (1);
	}
	return (-1);
}
