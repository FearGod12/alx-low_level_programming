#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints information about a dog
 * @d: pointer to a struct variable
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", (d->name == NULL) ? "(nil)" : d->name);
	printf("Age: %f\n", d->age);
	printf("Age: %s\n", (d->owner == NULL) ? "(nil)" : d->owner);
}
