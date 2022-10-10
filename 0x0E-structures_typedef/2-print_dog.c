#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints information about a dog
 * @d: pointer to a struct variable
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %.6f\n", d->age);
	printf("Age: %s\n", d->owner);
}
