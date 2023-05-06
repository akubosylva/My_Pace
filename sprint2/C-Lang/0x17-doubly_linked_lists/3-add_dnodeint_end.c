#include "lists.h"

/**
 * add_dnodeint_end - a function that adds a new node at the end
 * of a dlistint_t list
 * @head: pointer to the first node pointer
 * @n: number to save in new node
 *
 * Return: address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	if (!head)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		new->prev = NULL;
		return (new);
	}

	last = *head;
	while (last->next != NULL)
		last = last->next;
	new->next = NULL;
	new->prev = last;
	last->next = new;

	return (new);
}
