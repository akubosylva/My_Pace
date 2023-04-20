#include "dog.h"
#define NULL 0

/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: pointer to struct name
 * @name: name of d
 * @age: age of d
 * @owner: owner of d
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}
