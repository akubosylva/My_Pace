#include "lists.h"

/**
 * insert_nodeint_at_index -  a function that inserts a new node
 * at a given position
 * @head: pointer to the first node pointer
 * @idx: index of the list where to insert new node
 * @n: number to insert in the node
 *
 * Return: pointer to the new node or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i, len = 0;
	listint_t *tmp, *ptr, *new_node = NULL;

	if (head)
	{
		tmp = *head;
		while (tmp != NULL)
		{
			ptr = tmp;
			for (i = 0; tmp != NULL; i++)
			{
				tmp = tmp->next;
				len++;
			}
			if (idx >= len)
				return (NULL);
			new_node = malloc(sizeof(listint_t));
			if (new_node == NULL)
				return (NULL);
			new_node->n = n;
			for (i = 0; ptr != NULL; i++)
			{
				if ((i + 1) == idx)
				{
					new_node->next = ptr->next;
					ptr->next = new_node;
					return (new_node);
				}
				ptr = ptr->next;
			}
			return (NULL);
		}
	}
	return (NULL);
}
