#include "lists.h"

/**
 * add_node - a function that adds a new node at the
 * beginning of a list_t list
 * @head: pointer to the head pointer
 * @str: string to duplicate
 *
 * Return: the address of the new element or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	int i, strlen = 0;
	list_t *newNode;

	for (i = 0; *(str + i) != '\0'; i++)
		strlen++;
	if (str == NULL)
		return (NULL);
	if (strdup(str) == NULL)
		return (NULL);
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = strlen;

	if (head == NULL)
		newNode->next = NULL;
	else
		newNode->next = *head;
	*head = newNode;

	return (newNode);
}
