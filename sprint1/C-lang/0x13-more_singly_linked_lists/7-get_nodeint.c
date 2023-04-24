#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth
 * node of a listint_t linked list
 * @head: first node pointer
 * @index: index of the node starting at 0
 *
 * Return: the nth node of the list or NULL if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i, len = 0;

	tmp = head;
	if (tmp == NULL)
		return (NULL);
	for (i = 0; head != NULL; i++)
	{
		head = head->next;
		len++;
	}
	if (index >= len)
		return (NULL);
	for (i = 0; tmp != NULL; i++)
	{
		if (i == index)
			return (tmp);
		tmp = tmp->next;
	}
	return (tmp);
}
