#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list
 * @head: pointer to first node pointer
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp_node = *head, *current_node = *head, *prev_node = NULL;

	while (tmp_node != NULL)
	{
		tmp_node = current_node->next;
		current_node->next = prev_node;
		prev_node = current_node;
		current_node = tmp_node;
	}
	*head = prev_node;

	return (*head);
}
