#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees previously allocated memory for dogs
 * @d: pointer to memory location
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
