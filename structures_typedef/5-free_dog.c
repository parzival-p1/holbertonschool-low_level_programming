#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees dogs
 *
 * @d: ptr to structure dog
 * Return: Void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->age)
	free(d->owner);
	free(d);
}

