#include "lists.h"

/**
 * free_list - a function that frees a list_t list
 * @head: pointer to the first node of the list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *tmp;
	while (head != NULL)
	{
		tmp = head;
		free(tmp->str);
		head = head->next;
		free(tmp);
	}
}
