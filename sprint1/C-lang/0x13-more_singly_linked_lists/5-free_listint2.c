#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list
 * Description: the function sets the head to NULL
 * @head: pointer to the first node pointer
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			tmp = *head;
			*head = tmp->next;
			free(tmp);
		}
	}
}
