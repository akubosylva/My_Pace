#include "lists.h"

/**
 * print_listint_safe - a function that prints a listint_t linked list
 * @head: pointer to first node
 *
 * Return: the number of nodes in the list or exit with 98 if failed
 */

size_t print_listint_safe(const listint_t *head)
{
	/* Not yet done :( */
	/* I will figure it out */
	int i = 0;

	if (head == NULL)
		exit(98);
	while (head != NULL)
	{
		printf("[%p] %i\n", (void *)head, head->n);
		head = head->next;
		i++;
	}
	return (i);
}
