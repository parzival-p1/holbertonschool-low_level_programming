#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints a struct dog
 *
 * @d: dog struct
 *
 *
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		;

	else
	{
		printf("name.d%s\n", d->name);
		printf("age.d%f\n", d->age);
		printf("owner.d%s\n", d->owner);
	}
}
