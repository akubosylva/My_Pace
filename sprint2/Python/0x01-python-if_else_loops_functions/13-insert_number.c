#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * insert_node - a function in C that inserts a number into a
 * sorted singly linked list.
 * @head: pointer to the first node pointer
 * @number: number to insert
 *
 * Return: pointer to the node inserted
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *ptr = NULL, *tmp = NULL;

	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (!ptr)
		return (NULL);
	ptr->n = number;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		(*head)->next = NULL;
		return (ptr);
	}
	if ((*head)->next == NULL)
	{
		if ((*head)->n < ptr->n)
			(*head)->next = ptr;
		else
		{
			ptr->next = *head;
			*head = ptr;
		}
		return (ptr);
	}

	tmp = *head;
	while (tmp->next != NULL)
	{
		if (ptr->n < tmp->n)
		{
			ptr->next = tmp;
			*head = ptr;
			return (ptr);
		}
		if (((ptr->n > tmp->n) && (ptr->n < (tmp->next)->n)) || (ptr->n == tmp->n))
		{
			ptr->next = tmp->next;
			tmp->next = ptr;
			return (ptr);
		}
		tmp = tmp->next;
	}
	tmp->next = ptr;
	return (ptr);
}
