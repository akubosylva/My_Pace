#include "lists.h"

/**
 * add_node_end - a function that adds a new node at the end of
 * a list_t list
 * @head: pointer to head pointer
 * @str: string to add to the node end
 *
 * Return: address of the new element or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int i, strL = 0;
	list_t *newNode, *tmp;

	for (i = 0; *(str + i) != '\0'; i++)
		strL++;
	if (str == NULL)
		return (NULL);
	if (strdup(str) == NULL)
		return (NULL);

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = strL;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		tmp = *head;

		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = newNode;
	}
	return (newNode);
}
