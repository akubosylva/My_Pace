#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog - structure data type
 * @name: name pointer
 * @owner: owner pointer
 * @age: age parameter
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* MAIN_H */
