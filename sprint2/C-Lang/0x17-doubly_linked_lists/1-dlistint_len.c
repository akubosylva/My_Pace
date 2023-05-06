#include "lists.h"

/**
 * dlistint_len - a function that returns the number of
 * elements in a linked dlistint_t list
 * @h: first node pointer
 *
 * Return: number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int node_num = 0;

	while (h)
	{
		node_num++;
		h = h->next;
	}
	return (node_num);
}
