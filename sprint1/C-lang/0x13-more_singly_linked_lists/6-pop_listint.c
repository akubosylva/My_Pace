#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of
 * a listint_t linked list, and returns the head node’s data (n)
 * @head: pointer to first node of the list
 *
 * Return: head node's data(n) or 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (head == NULL)
		return (0);
	tmp = *head;
	*head = tmp->next;
	data = tmp->n;
	free(tmp);

	return (data);
}
