#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a variable
 * @d: pointer to the variable
 * @name: name of dog
 * @age: age of dog
 * @owner: dogs owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
