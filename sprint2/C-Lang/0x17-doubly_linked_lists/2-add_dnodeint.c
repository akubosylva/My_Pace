#include "lists.h"

/**
 * add_dnodeint - a function that adds a new node at the
 * beginning of a dlistint_t list
 * @head: pointer to first node pointer
 * @n: number to add
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp = NULL;

	if (head == NULL)
		return (NULL);
	tmp = malloc(sizeof(dlistint_t));
	if (!tmp)
		return (NULL);
	tmp->n = n;
	if (*head == NULL) /* head is pointing to NULL */
	{
		*head = tmp;
		tmp->next = NULL;
		tmp->prev = NULL;
		return (tmp);
	}
	tmp->next = *head; /* if head is pointing to an address */
	tmp->prev = NULL;
	(*head)->prev = tmp;
	*head = tmp;

	return (tmp);
}
