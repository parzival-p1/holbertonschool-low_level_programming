#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints a struct dog
 *
 * @d: dog struct
 * @n: prints nil if *d == NULL
 */

void print_dog(struct dog *d)
{
	int n = "nil";

	if (d == NULL)
	{
		printf("Name: %d\n", n);
		printf("Age: %d\n", n);
		printf("Owner: %d\n", n);
	}

	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);

	}
}

