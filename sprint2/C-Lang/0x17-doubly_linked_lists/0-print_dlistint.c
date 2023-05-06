#include "lists.h"

/**
 * print_dlistint - a function that prints all
 * the elements of a dlistint_t list
 * @h: first node pointer
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int node_num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_num++;
	}
	return (node_num);
}
