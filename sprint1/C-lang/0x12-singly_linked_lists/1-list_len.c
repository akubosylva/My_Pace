#include "lists.h"

/**
 * list_len - a function that returns the numbers of elements
 * in a linked list_t list
 * @h: head pointer to the node
 *
 * Return: numbers of elements
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
