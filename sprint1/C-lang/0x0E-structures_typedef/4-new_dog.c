#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "dog.h"

/**
 * new_dog - a function that creates a new dog
 * @name: new_dog's name
 * @age: new_dog's age
 * @owner: new_dog's owner
 *
 * Return: pointer to dog_t struct or NULL if fail
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j;
	dog_t *ptr = NULL;
	
	for (i = 0; *(name + i) != '\0'; i++)
		;
	for (j = 0; *(owner + j) != '\0'; j++)
		;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	ptr->name = malloc(i * sizeof(ptr->name));
	if (ptr->name == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	for (i = 0; *(name + i) != '\0'; i++)
		*(ptr->name + i) = *(name + i);
	ptr->age = age;
	ptr->owner = malloc(j * sizeof(ptr->owner));
	if (ptr->owner == NULL)
	{
		free(ptr->owner);
		free(ptr);
		return (NULL);
	}
	for (j = 0; *(owner + j) != '\0'; j++)
		*(ptr->owner + j) = *(owner + j);
	return (ptr);
}
