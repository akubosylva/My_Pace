#include "lists.h"

/**
 * get_dnodeint_at_index -a function that returns the nth node
 * of a dlistint_t linked list
 * @head: first node pointer
 * @index: index of node to get
 *
 * Return: node or NULL if it does not exits
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (!head)
		return (NULL);

	while (index && head->next)
	{
		head = head->next;
		index = index - 1;
	}
	if (index == 0)
		return (head);
	return (NULL);
}
