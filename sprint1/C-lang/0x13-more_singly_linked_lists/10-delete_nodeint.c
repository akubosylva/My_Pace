#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the
 * node at index index of a listint_t linked list
 * @head: pointer to the first node pointer
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp, *new_node;

	tmp = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	for (i = 0; tmp != NULL && i < (index -1); i++)
	{
		tmp = tmp->next;
		if (tmp->next == NULL)
			return (-1);
	}
	new_node = tmp->next->next;
	free(tmp->next);
	tmp->next = new_node;
	
	return (1);
}
