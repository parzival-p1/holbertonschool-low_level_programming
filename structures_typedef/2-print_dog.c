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
	char n = "nil";

	if (d == NULL)
	{
		printf("Name: %s\n", n);
		printf("Age: %s\n", n);
		printf("Owner: %s\n", n);
	}

	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);

	}
}

