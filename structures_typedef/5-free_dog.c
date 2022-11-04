#include "dog.h"
#include <stdio.h>
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
	free(age->age);
	free(owner->owner);
	free(d);
}

